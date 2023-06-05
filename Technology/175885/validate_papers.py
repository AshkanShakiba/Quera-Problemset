import re
import math


def words_count(string):
    count = 0
    for word in re.split(" |\n", string):
        if word != "":
            count += 1
    return count


def extract_paper(paper_file_path: str, font_size: int) -> dict:
    d = {
        "title": None,
        "abstract": None,
        "keywords": None,
        "introduction": None,
        "body": None,
        "conclusion": None,
        "references": None,
        "words_count": None,
        "pages_count": None,
    }
    buffer = None
    f = open(paper_file_path, "r", encoding="utf-8")
    while True:
        line = f.readline().replace("\n", "")
        if line == "TITLE":
            buffer = ""
        elif line == "ABSTRACT":
            d["title"] = buffer + "\n"
            buffer = ""
        elif line == "KEYWORDS":
            d["abstract"] = buffer + "\n"
            if words_count(d["abstract"]) > 150:
                raise Exception("The abstract section can't be more than 150 words")
            buffer = ""
        elif line == "KEYWORDS":
            d["abstract"] = buffer + "\n"
            buffer = ""
        elif line == "INTRODUCTION":
            d["keywords"] = buffer.split(",")
            if len(d["keywords"]) > 5:
                raise Exception("You can't put more than 5 keywords")
            sorted_keywords = sorted(d["keywords"])
            if sorted_keywords != d["keywords"]:
                raise Exception("Keywords are not sorted")
            buffer = ""
        elif line == "BODY":
            d["introduction"] = buffer + "\n"
            buffer = ""
        elif line == "CONCLUSION":
            d["body"] = buffer + "\n"
            buffer = ""
        elif line == "REFERENCES":
            d["conclusion"] = buffer + "\n"
            buffer = ""
        elif line == "":
            d["references"] = []
            for ref in buffer.split("\n"):
                d["references"].append(ref[4:])
            break
        else:
            if buffer != "":
                buffer += "\n"
            buffer += line
    f.close()
    f2 = open(paper_file_path, "r", encoding="utf-8")
    d["words_count"] = words_count(f2.read()) - 7
    words_per_each_page = math.floor(8192 / font_size)
    d["pages_count"] = math.ceil(d["words_count"] / words_per_each_page)
    if d["pages_count"] > 9:
        raise Exception("The whole paper can't be more than 9 pages")
    f2.close()
    return d

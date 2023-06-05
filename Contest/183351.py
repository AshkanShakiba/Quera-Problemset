n = int(input())

name_to_num = {
    "Farvardin": 0,
    "Ordibehesht": 31,
    "Khordad": 62,
    "Tir": 93,
    "Mordad": 124,
    "Shahrivar": 155,
    "Mehr": 186,
    "Aban": 216,
    "Azar": 246,
    "Dey": 276,
    "Bahman": 306,
    "Esfand": 336,
}

wd_to_num = {
    "shanbe": 0,
    "1shanbe": 1,
    "2shanbe": 2,
    "3shanbe": 3,
    "4shanbe": 4,
    "5shanbe": 5,
    "jome": 6,
}

num_to_wd = [
    "shanbe",
    "1shanbe",
    "2shanbe",
    "3shanbe",
    "4shanbe",
    "5shanbe",
    "jome",
]

for i in range(0, n):
    first = input().split(" ")
    second = input().split(" ")
    first_day, first_mon, first_wd = first
    date_of_first = name_to_num[first_mon] + int(first_day)
    wd_of_first = wd_to_num[first_wd]

    second_day, second_mon = second
    date_of_second = name_to_num[second_mon] + int(second_day)

    diff = date_of_second - date_of_first
    wd_of_second = (wd_of_first + diff) % 7
    print(num_to_wd[wd_of_second])

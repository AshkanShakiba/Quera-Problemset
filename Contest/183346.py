import math

s = input()

q_count = s.count("?")

if q_count < 1:
    print(s)

else:
    filler = q_count

    a = []
    for i in range(0, int(math.pow(2, q_count))):
        instead = bin(i)[2:].zfill(filler)
        instead_i = 0
        s2 = ""
        s_i = 0
        while s_i < len(s):
            if s[s_i] != "?":
                s2 += s[s_i]
            else:
                s2 += instead[instead_i]
                instead_i += 1
            s_i += 1
        a.append(s2)

    a.reverse()
    for x in a:
        print(x)

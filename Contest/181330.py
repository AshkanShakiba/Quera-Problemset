import math

n = input()
inps = []
for i in range(int(n)):
    inps.append(input())

min_val = -math.inf
max_val = math.inf
res = []
inc = {}
for i in range(int(n)):
    inp = inps[i]
    if inp[0] == '[':
        start_inc = True
    elif inp[0] == '(':
        start_inc = False
    comma_pos = inp.index(',')
    start_num = inp[1:comma_pos]
    if start_num == '-inf':
        start_num = -math.inf
    else:
        start_num = int(start_num)
    end_num = inp[comma_pos + 1:len(inp) - 1]
    if end_num == " inf":
        end_num = math.inf
    else:
        end_num = int(end_num)
    if inp[len(inp) - 1] == ']':
        end_inc = True
    elif inp[len(inp) - 1] == ')':
        end_inc = False

    interval = (start_num, end_num)
    res.append(interval)
    if start_num in inc.keys():
        if not inc[start_num]:
            if start_inc:
                inc[start_num] = True
    else:
        inc[start_num] = start_inc
    if end_num in inc.keys():
        if not inc[end_num]:
            if end_inc:
                inc[end_num] = True
    else:
        inc[end_num] = end_inc

b = []
for begin, end in sorted(res):
    if b and b[-1][1] == begin:
        if not inc[begin]:
            b.append([begin, end])
        else:
            b[-1][1] = max(b[-1][1], end)
    elif b and b[-1][1] > begin:
        b[-1][1] = max(b[-1][1], end)
    else:
        b.append([begin, end])

i = 0
for item in b:
    if inc[item[0]]:
        print('[', end="")
    else:
        print('(', end="")
    print(item[0], end="")
    print(', ', end="")
    print(item[1], end="")
    if inc[item[1]]:
        print(']', end="")
    else:
        print(')', end="")

    if not i == len(b) - 1:
        print(' U ', end="")
    i += 1

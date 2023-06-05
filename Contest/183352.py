import sys


class Table:
    def __init__(self, d, t):
        self.d = d
        self.t = t


n = int(input())
d = [int(x) for x in input().split(" ")]
t = [int(x) for x in input().split(" ")]

dp = []
tables = []
for i in range(0, n):
    dp.append([sys.maxsize, sys.maxsize])
    tables.append(Table(d[i], t[i]))

tables.sort(key=lambda x: x.d, reverse=False)

dis = []
for i in range(0, n):
    rw = []
    for j in range(0, n):
        if j < i:
            rw.append(None)
        if j == i:
            rw.append(0)
        if j > i:
            num = rw[len(rw) - 1] + (tables[j].d - tables[i].d)
            rw.append(num)
    dis.append(rw)

dp[0] = [sys.maxsize, tables[0].t]
for i in range(1, n):
    min_list = []
    for j in range(0, i):
        cost = 0
        cost += dp[j][1]
        cost += dis[j][i]

        min_list.append(cost)

    dp[i][0] = min(min_list)
    dp[i][1] = min(dp[i - 1][1], dp[i - 1][0]) + tables[i].t

print(min(dp[n - 1][0], dp[n - 1][1]))

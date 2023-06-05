n = int(input())
a = [int(x) for x in input().split(" ")]

a.sort()

k = n
while k > 0:
    i = n - k
    if a[i] >= k:
        break
    k -= 1
print(k)

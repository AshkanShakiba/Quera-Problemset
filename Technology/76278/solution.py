def calculator(n, m, li):
    i = 0
    new_list = []
    while i <= n:
        new_list.append(sum(li[i:i + m]))
        i += m
    o = 1
    result = 0
    for num in new_list:
        result += o * num
        o *= -1
    return result

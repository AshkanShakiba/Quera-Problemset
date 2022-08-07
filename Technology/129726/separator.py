def separator(ls):
    odd = []
    even = []
    for num in ls:
        if num % 2 == 0:
            even.append(num)
        else:
            odd.append(num)
    return even, odd

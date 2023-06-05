def value_of_s(n: int):
    if n == 1:
        return 1
    else:
        sum_of_digits = 0
        for digit in str(n):
            sum_of_digits += int(digit)
        value = 2 * value_of_s(n - 1) + sum_of_digits
        return value % 1000000007


n = int(input())
print(value_of_s(n))

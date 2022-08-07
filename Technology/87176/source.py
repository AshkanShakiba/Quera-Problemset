def game(number):
    digits = [number//10, number%10]
    return max(digits) - min(digits)

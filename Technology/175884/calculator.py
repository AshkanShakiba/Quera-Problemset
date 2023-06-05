def calculate_floor(string):
    f = 0
    for char in string:
        if char == "U":
            f += 1
        else:
            f -= 1
    return f

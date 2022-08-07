def fruits(fruit_list):
    result = {}
    for fruit in fruit_list:
        name = fruit["name"]
        shape = fruit["shape"]
        mass = fruit["mass"]
        volume = fruit["volume"]
        if shape == "sphere" and 300 <= mass <= 600 and 100 <= volume <= 500:
            if name not in result:
                result[name] = 0
            result[name] += 1
    return result

class Coord:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def is_valid(self, n):
        return 0 <= self.x < n and 0 <= self.y < n


offsets = [
    Coord(-1, -1),
    Coord(0, -1),
    Coord(1, -1),
    Coord(-1, 0),
    Coord(1, 0),
    Coord(-1, 1),
    Coord(0, 1),
    Coord(1, 1),
]


def parse(s):
    return int(s)


def possible_winner(table, c, a):
    x_can_win = False
    o_can_win = False
    n = len(table[c.x])
    for direction in range(8):
        x, o, empty = 0, 0, 0
        for i in range(a):
            c2 = Coord(c.x + i * offsets[direction].x, c.y + i * offsets[direction].y)
            if not c2.is_valid(n):
                continue
            if table[c2.x][c2.y] == 'X':
                x += 1
            elif table[c2.x][c2.y] == 'O':
                o += 1
            elif table[c2.x][c2.y] == '-':
                empty += 1
        if o == a or x == a:
            return "Finish"
        if x == a - 1 and empty == 1:
            x_can_win = True
        if o == a - 1 and empty == 1:
            o_can_win = True
        if x_can_win and o_can_win:
            return "both"

    if x_can_win:
        return "X"
    if o_can_win:
        return "O"
    return ""


def main():
    f = input().split()
    n = parse(f[0])
    a = parse(f[1])
    table = []
    for _ in range(n):
        table.append(input())

    x_can_win = False
    o_can_win = False
    for i in range(n):
        for j in range(len(table[i])):
            res = possible_winner(table, Coord(i, j), a)
            if res:
                if res == "X":
                    x_can_win = True
                elif res == "O":
                    o_can_win = True
                elif res == "both":
                    x_can_win = True
                    o_can_win = True
                elif res == "Finish":
                    print("Finished")
                    return
                if x_can_win and o_can_win:
                    break

    if x_can_win and o_can_win:
        print("Both")
    elif x_can_win:
        print("X")
    elif o_can_win:
        print("O")
    else:
        print("None")


if __name__ == "__main__":
    main()

a, b = [int(x) for x in input().split(" ")]
n = int(input())

# initialize table
m = []
for i in range(0, a * b):
    sm = []
    for j in range(0, a * b):
        sm.append(".")
    m.append(sm)


# functions:
def print_m(m):
    for i in range(0, a * b):
        for j in range(0, a * b):
            print(m[i][j], end="")
        print()


def check_place(m, i, j, x):
    if m[i][j] != ".":
        return False
    return True


def check_row(m, i, j, x):
    for k in range(0, a * b):
        if m[i][k] == x:
            return False
    return True


def check_col(m, i, j, x):
    for k in range(0, a * b):
        if m[k][j] == x:
            return False
    return True


def check_cell(m, i, j, x):
    cell_i = i // a
    cell_j = j // b
    for k in range(a * cell_i, a * cell_i + a):
        for l in range(b * cell_j, b * cell_j + b):
            if m[k][l] == x:
                return False
    return True


def is_valid(m, i, j, x):
    return check_place(m, i, j, x) and check_row(m, i, j, x) and check_col(m, i, j, x) and check_cell(m, i, j, x)


# starting game
turn = 1

move = 0
while move < n:
    i, j, x = [int(y) for y in input().split(" ")]
    i -= 1
    j -= 1
    print(f"player {turn}:")
    if is_valid(m, i, j, x):
        m[i][j] = x
        print_m(m)
        # change turn
        if turn == 1:
            turn = 2
        else:
            turn = 1
    else:
        print("invalid move")
    move += 1

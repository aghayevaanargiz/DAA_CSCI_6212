x, y = map(int, input().split())

arr = [[0] * (y+1) for i in range(x+1)]

def f(x, y):
    if x <= 0 or y <= 0:
        return 0

    if arr[x][y] != 0:
        return arr[x][y]

    if x <= y:
        arr[x][y] = f(x - 1, y - 2) + f(x - 2, y - 1) + 2
    else:
        arr[x][y] = f(x - 2, y - 2) + 1

    return arr[x][y]

print(f(x, y))

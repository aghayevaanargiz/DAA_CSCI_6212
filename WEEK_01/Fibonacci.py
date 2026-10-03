n = int(input())

arr = [0] * (n + 1) #array with a size n+1 in py

def f(n):
    if n == 0 or n == 1:
        return 1

    if arr[n] != 0:
        return arr[n]

    arr[n] = f(n - 1) + f(n - 2)
    return arr[n]

print(f(n))

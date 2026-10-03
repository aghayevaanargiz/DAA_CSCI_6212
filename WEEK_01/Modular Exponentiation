x, n, m = map(int, input().split())

def modexp(x, n, m):
    if (n == 0):
        return 1
    if (n % 2 == 0):
        return modexp((x*x) % m, n/2, m)
    else:
        return (x * modexp(x, n-1, m)) % m

print(modexp(x, n, m))

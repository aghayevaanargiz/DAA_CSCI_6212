n = int(input())

m = 10**9 + 7

def modexp(a, b, m):
    if (b == 0):
        return 1
    if (b % 2 == 0):
        return modexp((a*a) % m, b/2, m)
    else:
        return (a * modexp(a, b-1, m)) % m

def binsandballs(n, m):
    if (n == 1):
        return 1
    return (n * modexp(n-1, n-1, m)) % m 

print(binsandballs(n, m))

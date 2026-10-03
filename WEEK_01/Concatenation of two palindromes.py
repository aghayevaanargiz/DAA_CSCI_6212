n, k = map(int, input().split())
MOD = 10**9 + 7
ans = 0

def modexp(x, n, m):
    if n == 0:
        return 1
    if n % 2 == 0:
        return modexp((x * x) % m, n // 2, m)
    return (x * modexp(x, n - 1, m)) % m

for l in range(1, n):
    p1 = (l + 1) // 2
    p2 = (n - l + 1) // 2
    ans = (ans + modexp(k, p1, MOD) * modexp(k, p2, MOD)) % MOD

print(ans)

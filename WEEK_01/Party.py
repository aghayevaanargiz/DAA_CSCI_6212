n, k = map(int, input().split())
m = 9929

arr = [[0] * (k + 1) for _ in range(n + 1)]

def C(n, k):
    if k == 0 or k == n:
        return 1
    
    if arr[n][k] != 0:
        return arr[n][k]
    
    arr[n][k] = (C(n - 1, k - 1) + C(n - 1, k)) % m
    return arr[n][k]

result = C(n, k)
print(result)

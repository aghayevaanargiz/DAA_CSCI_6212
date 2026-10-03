n = int(input())
arr = list(map(int, input().split()))

gcd = arr[0]

for i in range(1, n):
    a = gcd
    b = arr[i]

    while b != 0:
        r = a % b
        a = b
        b = r

    gcd = a

print(gcd)

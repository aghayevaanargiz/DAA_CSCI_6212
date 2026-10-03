import math

n = int(input())

factors = []

for i in range(1, int(math.sqrt(n)) + 1):
    d = n % i
    if d == 0:
        factors.append(i)
        if(i != n//i):
            factors.append(n // i)

factors.sort()

print(*factors)

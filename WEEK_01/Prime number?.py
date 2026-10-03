import math
a = int(input())

count = 0

for i in range(2, int(math.sqrt(a))+1):
    if(a%i == 0):
        count +=1

if(count == 0):
    print("Yes")
else:
    print("No")

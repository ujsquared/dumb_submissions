x = int(input())
sumX,sumY,sumZ = 0,0,0
for i in range(0,x):
    a, b, c = map(int, input().split())
    sumX +=a
    sumY +=b
    sumZ +=c
if sumX == sumY == sumZ == 0:
    print("YES")
else:
    print("NO")


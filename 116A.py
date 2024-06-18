n  = int(input())
max = 0
curr = 0
for i in range(n):
    pExit, pEnter  = map(int,input().split())
    curr += (pEnter - pExit)
    if curr > max:
        max = curr
# pE(s) at i'th stop is list[i+1]
print(max)


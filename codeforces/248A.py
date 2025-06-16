n  = int(input())
list = []
for i in range(n):
    left, right = map(int,input().split())
    list.append([left,right])
# 1 is open , 0 is closed 
lCount = 0 #open left doors 
rCount = 0 #open right doors
for i in list:
    if i[0] == 1.0 :
        lCount+=1
    if i[1] == 1.0:
        rCount+=1
if n/2 < lCount:
    lCount = n - lCount
if n/2 < rCount:
    rCount = n - rCount
print(lCount+rCount)


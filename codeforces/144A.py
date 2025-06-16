n = int(input())
l = []
l = l + input().split()
low = 0 
high = 0 

for i in range(n):
    if int(l[i]) > int(l[high]):
        high  = i
    if int(l[i]) <= int(l[low]):
        low = i
if high > low:
    print(high + n-1 - low -1)
else:
    print(high + n-1 - low)
        


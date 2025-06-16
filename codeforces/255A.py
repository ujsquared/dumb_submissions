n = int(input())
list = []
list = list + input().split()
high = int(list[0])
low = int(list[0])
count = 0
for i in list:
    if int(i) > high:
        high = int(i)
        count +=1
    if int(i) < low:
        low = int(i)
        count +=1
print(count)

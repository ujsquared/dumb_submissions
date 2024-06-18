n  = int(input())
l = []
l = l + input().split()
total = n * 100
fraction = 0
for i in l:
    fraction += int(i)
print((fraction*100)/total)

    


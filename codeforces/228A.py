lst = []
lst = lst + input().split()
lst2 = []
cnt = 0
for i in lst:
    if i in lst2:
        cnt+=1
    else:
        lst2.append(i)
print(cnt)


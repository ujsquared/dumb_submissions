guest = input()
host = input()
pile = input()
sum = guest + host
flag = False
list = []
if len(pile) != len(guest) + len(host):
    flag = True
else:
    for i in guest:
        if i not in list:
            list.append(i)
    for j in host:
        if j not in list:
            list.append(j)
    for k in list:
        if sum.count(k) != pile.count(k):
            flag = True
if flag == True:
    print("NO")
else:
    print("YES")


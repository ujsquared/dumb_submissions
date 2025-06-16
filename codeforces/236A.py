s = input()
l = []
for i in s:
    if i not in l:
        l.append(i)
    else:
        pass
if len(l) % 2 == 0 and len(l) != 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")


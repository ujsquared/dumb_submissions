count = 0
l = input()
for i in l:
    if i == "7" or i == "4":
        count+=1
if count == 4 or count == 7:
    print("YES")
else:
    print("NO")


a = input()
b = input()
ans = []
for i in range(len(a)):
    if a[i] != b[i]:
        ans.append(1)
    else:
        ans.append(0)
for k in ans:
    print(k,end="")


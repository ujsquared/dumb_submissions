s = input()
for i in s:
    if ord(i) >=33 and ord(i) <=126:
        if ord(i) == 57 or ord(i) == 72 or ord(i) == 81:
            print("YES")
            exit()
print("NO")


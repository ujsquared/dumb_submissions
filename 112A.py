s1 = input()
s2 = input()
s1, s2 = s1.lower() , s2.lower()
flag = 0
for i in range(len(s1)):
    if ord(s1[i]) > ord(s2[i]):
        print("1")
        exit()
    elif ord(s1[i]) < ord(s2[i]):
        print("-1")
        exit()
print("0")

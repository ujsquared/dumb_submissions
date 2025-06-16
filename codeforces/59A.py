s = input()
up = []
down = []
for i in s:
    if i.isupper() == True:
        up.append(i)
    elif i.islower() == True:
        down.append(i)
if len(up) > len(down):
     print(s.upper())
else:
    print(s.lower())
    

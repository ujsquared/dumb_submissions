n =  int(input())
output = []
for k in range(n):
    len, digit = map(int,input().split())
    num = int(input())
    new = ''
    i = 0
    while i <= len:
        if digit == 0 or i == len : 
            new = str(num) + str(digit)
            break
        elif ord(str(num)[i]) < ord(str(digit)):
            new =  str(num)[:i:] + str(digit) + str(num)[i::]
            break
        else:
            i += 1
    output.append(new)
for j  in output:
    print(j)

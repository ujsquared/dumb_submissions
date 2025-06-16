x = 0
n = int(input())
for i in range(n):
    inp = input()
    if "++" in inp:
        x +=1
    elif "--" in inp:
        x -=1
print(x)

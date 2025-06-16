inp = list(input())
n = len(inp)
i = 0
while i < n:
    if inp[i]=="-":
        if inp[i+1] == ".":
            print("1",end="")
        elif inp[i+1] == "-":
            print("2",end="")
        i+=1
    elif inp[i] == ".":
        print("0",end="")
    i+=1



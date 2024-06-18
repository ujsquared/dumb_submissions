n , t = map(int,input().split())
s = str(input())
l= list(s)
for i in range(0,t):
    k = 0
    while k<=n-2:
        if l[k] == "B" and l[k+1] == "G":
           l[k]="G"
           l[k+1]="B" 
           k+=1
        else:
            pass
        k+=1
for k in l:
    print(k,end="")


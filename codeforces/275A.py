l = []
g = [[1,1,1],[1,1,1],[1,1,1]]
for i in range(3):
    a, b, c = map(int, input().split())
    l.append([a,b,c])
def toggle(list, m,n):
    if list[m][n] == 1:
        list[m][n] = 0
    elif list[m][n] == 0:
        list[m][n] = 1
for i in range(0,3):
    for j in range(0,3):
        if l[i][j] % 2 == 1:
            toggle(g,i,j)
            if i>0:
               toggle(g,i-1,j)
            if i+1<3:
                toggle(g,i+1,j)
            if j>0:
                toggle(g,i,j-1)
            if j+1<3:
                toggle(g,i,j+1)
for i in g:
    for k in i:
        print(k,end="")
    print()

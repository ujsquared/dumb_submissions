matrix = []
_1place = [0,0]
for i in range(0,5):
    a, b, c, d, e = map(int, input().split())
    matrix.append([a,b,c,d,e])
    l = [a,b,c,d,e]
    for k in l:
        if k == 1:
            _1place = [i,l.index(1)]
print(abs(_1place[0]-2)+abs(_1place[1]-2))


n = int(input())
lst = [] + input().split()
m = int(input())
query = [] + input().split()
vsya = 0
petya = 0
for i in query:
    if i in lst:
        new_index = lst.index(i)+1
        index_last = n - new_index + 1
        print(new_index, index_last)
        if new_index > index_last:
            petya +=1
        elif new_index < index_last:
            vsya +=1
print(vsya, petya)
         

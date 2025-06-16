n = int(input())
if n == 1:
    print(-1)
elif n%2 == 0:
   i = 1
   while i < n:
       print(i+1,i,end=" ")
       i+=2
elif n%2 == 1:
    print(-1)
  #  while i>=1:
  #      print(i,end=" ")
#print(n) 


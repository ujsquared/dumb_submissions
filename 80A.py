def checkPrime(n):
    if n == 0 or n == 1:
        return False
    i = 2
    while(i*i <= n):
        if n % i == 0:
            return False
        
        i+=1
    return True
a, b = map(int, input().split())
def betweenPrime():
    if checkPrime(b) == False:
        return "NO"
    else:
        for i in range(a+1,b):
            if checkPrime(i) == True:
                return "NO"
        return "YES"
print(betweenPrime())

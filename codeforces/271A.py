y = int(input())
def checkBeauty(i):
    digits = list(str(i))
    for i in digits:
        if digits.count(i) > 1:
            return False

    return True
def sendBeauty():
    for i in range(y+1,10000):
        if checkBeauty(i) == True:
            print(i)
            return i
        else:
            pass
sendBeauty()

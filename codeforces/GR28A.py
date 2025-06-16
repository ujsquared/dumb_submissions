
def check(n):
    if n < 3: return False
    if n%33 == 0: return True
    countthree = n.count(3)  
    if countthree < 2:
        check(n-33);
    else:


    return False

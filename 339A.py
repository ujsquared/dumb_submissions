
# I had to look up this dumbass question, im so dumb. But yes it taught me about 
# how every solution should be generalised as much as possible

inp = input()
cOne = 0
cTwo = 0
cThree = 0
for i in inp:
    if i == "1":
        cOne+=1
    elif i == "2":
        cTwo+=1
    elif i == "3":
        cThree+=1
str = "1+"*cOne + "2+"*cTwo + "3+"*cThree
print(str[:-1:])

import math
list = input().split()
nimbu_constraint = (int(list[3])*int(list[4]))/int(list[0])
drink_constraint = (int(list[1])*int(list[2]))/(int(list[0])*int(list[6]))
salt_constraint = (int(list[5]))/(int(list[0])*int(list[7]))
print(min(math.floor(nimbu_constraint),math.floor(drink_constraint),math.floor(salt_constraint)))


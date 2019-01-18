def possible(a, b, c):
    print(a, b, c)
    return not (a and b) or ((a and c) and not (b or not c))


print(possible(0,0,0))
print(possible(0,0,1))
print(possible(0,1,0)) 
print(possible(0,1,1)) 
print(possible(1,0,0)) 
print(possible(1,0,1)) 
print(possible(1,1,0)) 
print(possible(1,1,1)) 
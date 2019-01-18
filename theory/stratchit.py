def abc(a, b, c):
    sum = a ^ (b ^ c)
    carry = a and b or (b and c or a and c)
    print(a, b, c, carry, sum)


abc(0,0,0)
abc(0,0,1)
abc(0,1,0)
abc(0,1,1)
abc(1,0,0)
abc(1,0,1)
abc(1,1,0)
abc(1,1,1)
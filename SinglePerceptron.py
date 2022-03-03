def and_gate(x1, x2):
    w1 = 0.5
    w2 = 0.5
    b = -0.7
    result = x1*w1+x2*w2+b
    if result <=0:
    return 0
    else:
    return 1

def nand_gate(x1, x2):
    w1 = -0.5
    w2 = -0.5
    b = 0.7
    result = x1*w1+x2*w2+b
    if result <= 0:	
    return 0	
    else:	
    return 1
	
def or_gate(x1,x2):
    w1 = 0.6
    w2 = 0.6
    b = -0.5
    result = x1*w1+x2*w2+b
    if result <= 0:
    return 0
    else:
    return 1
def all_gate(x1,x2):
    print(and_gate(x1,x2))
    print(nand_gate(x1,x2))
    print(or_gate(x1,x2))
    return 0

print(all_gate(0,0))
print(all_gate(0,1))
print(all_gate(1,0))
print(all_gate(1,1))



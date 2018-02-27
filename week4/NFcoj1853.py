
def fact(a):
    if a==1 or a==0:
        return 1
    return fact(a-1)*a

T=int(raw_input())

for x in range(T):
    i=int(raw_input())
    if i==1:
        temp=fact((i+1)*(i+1))/(6*fact(((i+1)*(i+1))-3))
        print(temp)
    else:
        temp=fact((i+1)*(i+1))/(6*fact(((i+1)*(i+1))-3))
        temp1=(fact(i+1)*2*(i+1))/(6*fact(((i+1))-3))
        print(temp-temp1)

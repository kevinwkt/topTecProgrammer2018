
a=int(raw_input())

for i in range(1,a+1):
    b=int(raw_input())
    suma=1
    for j in range(2,b+1):
        suma*=j

    print("Case #%d: %d"%(i,suma))

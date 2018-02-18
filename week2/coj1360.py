import fractions

while True:
    p,q=(int(x) for x in raw_input().split())
    if p==0 and q==0:
        break

    x=p
    y=q

    c=[]
    while True:
        temp= fractions.Fraction(p,q)
        p=temp.numerator
        q=temp.denominator
        if q==1:
            c.append(int(p/q)-1)
            c.append(1)
            break
        else:
            c.append(int(p/q))
            d=p%q   #7
            p=q
            q=d

    ans=str(x)+"/"+str(y)+"=["
    for i in range (len(c)):
        ans+=(str(c[i])+",")
    ans=ans[:-1]+"]"
    print(ans)

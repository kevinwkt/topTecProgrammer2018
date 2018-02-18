
while True:
    a=int(raw_input())
    if a==0:
        break
    dp=[]
    for i in range(a+1):
        dp.append(0)
    dp[0]=1
    dp[1]=1

    for i in range(2,a+1):
        for j in range(i):
            dp[i]+=(dp[j]*dp[i-j-1])

    tot=1
    for i in range(2,a+1):
        tot=tot*i
    print(dp[a]*tot)

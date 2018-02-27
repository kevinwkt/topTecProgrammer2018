

x=int(raw_input())
s=1
for i in range(2,x+1):
    s+=(s*i)

tot=0
tot2=0
while s:
    tot+=1
    if s&1:
        tot2+=tot
    s=(s>>1)
print(tot2)

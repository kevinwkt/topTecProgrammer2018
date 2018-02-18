useless=raw_input()

aa=raw_input().split()
bb=raw_input().split()

a=[int(x) for x in aa]
b=[int(x) for x in bb]

a.sort()
b.sort()
b.reverse()

sum=0

for i in range(len(a)):
    sum=sum+(a[i]*b[i])

print(sum)

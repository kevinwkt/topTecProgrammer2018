
def fact(a):
    if a==1 or a==0:
        return 1
    return fact(a-1)*a

def comb(a,b):
	return fact(a)/(fact(b)*fact(a-b)) 	

T=int(raw_input())

for x in range(T):
    n=int(raw_input())+1
    tot=comb(n*n,3)
    if n>=3:
        tot=tot-(2*n*comb(n,3))
	for i in range(3,n):
		tot=tot-(2*comb(i,3))
		tot=tot-(2*comb(n,3))	
    if n>=5:
	for i in range(2,int(n/2)):
		tot=tot-(4*(n-i)*comb(int(n/i),3))

print(tot)

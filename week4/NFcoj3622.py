vertice,edge=map(int,raw_input().split())

arr=[]
visited=[]
for i in range(vertice):
	arr.append(-1)
	visited.append(-1)

for i in range(edge):
	a,b=map(int,raw_input().split())
	visited[a]=0
	visited[b]=0
	if arr[a]==-1:
		arr[a]=b
	else:
		arr[b]=a

#print("ARR:")
#print(arr)
#print("VISITED:")
#print(visited)

anotherCycle=True
goOn=True

for i in range(vertice):
	#print("I am in %d and all good"%(i))
	if goOn==False:
		break
	if visited[i]==0:
		curr=i
		count=1
		while True:
			visited[curr]=1
			if arr[curr]==-1:
				break
			if arr[curr]==i:
				#print("Cycle detected with length %d"%(count))
				if count%6!=0:
					anotherCycle=False
					goOn=False
				break
			curr=arr[curr]
			count+=1


if anotherCycle==True:
	print("yes")
else:
	print("no")

servers=[]

def cycle(start, end, comp):
    for i in range(end+1):
        if servers[start][i]==comp:
            if servers[end][i]==comp:
                return True
    return False


while True:
    yes=(raw_input().split())
    N=int(yes[0])
    M=int(yes[1])
    C=int(yes[2])
    T=int(yes[3])

    if  not (N or M or C or T):
        break

    count=1

    for i in range(N+1):
        if i==0:
            servers.append([])
        else:
            fds=[]
            for j in range(count):
                fds.append(-1)
            servers.append(fds)
            count+=1
    # print(servers)

    companies=[]
    for i in range(C+1):
        companies.append(0)

    start=0
    end=0
    comp=0

    for i in range(M):
        yes=raw_input().split()
        end=int(yes[0])
        start=int(yes[1])
        comp=int(yes[2])
        servers[start][end]=comp
        companies[comp]+=1

    for i in range(T):
        yes=raw_input().split()
        end=int(yes[0])
        start=int(yes[1])
        comp=int(yes[2])

        if servers[start][end]==-1:
            print("No such cable.")
        elif servers[start][end]==comp:
            print("Already owned.")
        elif not cycle(start,end,comp):
            if companies[comp]==2:
                print("Forbidden: monopoly.")
            else:
                print("Sold.")
                companies[servers[start][end]]-=1
                companies[comp]+=1
                servers[start][end]=comp
        else:
            print("Forbidden: redundant.")

import datetime


d,h,m=(int(x) for x in raw_input().split())

start=datetime.datetime(2011,11,11,11,11)

finish=datetime.datetime(2011,11,d,h,m,0,0)

ans=int((finish-start).total_seconds()/60)

if ans<0:
    print("-1")
else:
    print(str(ans))

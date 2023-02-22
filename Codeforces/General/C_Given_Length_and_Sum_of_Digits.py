m,s=map(int,input().split())
low=[0]*m
hie=[0]*m
x=s
if s==0 and m==1:
    print("0 0")
    exit()

if s>0:
    low[0]=1
    x-=1
i=m-1
while x>0 and i>=0:
    temp=min(9,x)
    low[i]+=temp
    x-=temp
    i-=1

xx=s
i=0
while xx>0 and i<m:
    temp=min(9,xx)
    hie[i]=temp
    xx-=temp
    i+=1
if (low == [0]*len(low) and hie == [0]*len(hie) )or x>0 or xx>0:
    print("-1 -1")
else:
    print(*low,sep='',end=' ')
    print(*hie,sep='')
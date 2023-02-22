for _ in range(int(input())):
    n,x=map(int,input().split())
    if x<-(n-1) or x>n+1:
        print("-1")
    else:
        if x>0:
            temp=x-1
            ans=['+']*temp
            ans.extend(['*']*(n-temp))
            print(*ans,sep='')
        elif x==0:
            if n%2==0:
                temp=n//2
                ans=['+']*(temp-1)
                ans.extend(['-']*temp)
                ans.extend(['*'])
                print(*ans,sep='')
            else:
                temp=n//2
                ans=['+']*(temp)
                ans.extend(['-']*(n-temp))
                print(*ans,sep='')
        else:
            temp=abs(x)+1
            ans=['-']*temp
            ans.extend(['*']*(n-temp))
            print(*ans,sep='')
            
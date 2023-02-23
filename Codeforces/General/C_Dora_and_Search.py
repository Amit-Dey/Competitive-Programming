for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    l=0
    r=n-1
    mn=1
    mx=n
    while l<=r:
        if arr[l]==mx:
            mx-=1
            l+=1
        elif arr[l]==mn:
            mn+=1
            l+=1
        elif arr[r]==mx:
            mx-=1
            r-=1
        elif arr[r]==mn:
            mn+=1
            r-=1
        else:
            break
    print(f"{l+1} {r+1}" if l<=r else "-1")
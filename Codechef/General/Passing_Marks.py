for _ in range(int(input())):
    n,x=map(int,input().split())
    marks=list(map(int,input().split()))
    marks.sort()
    ans=0
    i=n-1
    while i>=0 and x>0:
        ans=marks[i]
        x-=1
        i-=1
    print(ans-1)
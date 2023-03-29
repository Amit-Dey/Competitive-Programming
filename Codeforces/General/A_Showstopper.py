for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    for i in range(n):
        if a[i]<b[i]:
            a[i],b[i]=b[i],a[i]
    mxa=max(a)
    mxb=max(b)
    print("Yes" if mxa==a[n-1] and mxb==b[n-1] else "No")
    
for _ in range(int(input())):
    a,b,x,y,n=map(int,input().split())
    aa=a
    bb=b
    nn=n
    temp = min(n,a)
    temp = min(temp,a-x)
    a-=temp
    n-=temp
    if n>0:
        temp=min(n,b)
        temp = min(temp,b-y)
        b-=temp
        n-=temp
    temp=min(nn,bb)
    temp = min(temp,bb-y)
    bb-=temp
    nn-=temp
    if nn>0:
        temp=min(nn,aa)
        temp = min(temp,aa-x)
        aa-=temp
        nn-=temp
    print(min(a*b,aa*bb))


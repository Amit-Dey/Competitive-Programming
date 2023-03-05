for _ in range(int(input())):
    n=int(input())
    s=list(map(str,input().split()))
    ss=list()
    for i in s:
        if len(i)==n-1:
            ss.append(i)
    ss.sort()
    flag=True
    x=0
    y=n-2
    for i in range(n-1):
        if ss[0][x]!=ss[1][y]:
            flag=False
            break
        x+=1
        y-=1
    print("YES" if flag else "NO")
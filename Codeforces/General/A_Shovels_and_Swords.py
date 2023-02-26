for _ in range(int(input())):
    a,b=map(int,input().split())
    ans=min(min(a,b),(a+b)//3)
    print(ans)
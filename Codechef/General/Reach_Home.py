for _ in range(int(input())):
    x,y=map(int,input().split())
    x*=5
    print("YES" if x>=y else "NO")
    
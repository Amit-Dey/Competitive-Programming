for _ in range(int(input())):
    n=int(input())
    s=input()
    master=""
    for i in range(50):
        if i%3==0 and i%5==0:
            master+="FB"
        elif i%3==0:
            master+='F'
        elif i%5==0:
            master+='B'
    print("YES" if s in master else "NO")
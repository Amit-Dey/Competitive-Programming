for _ in range(int(input())):
    n=int(input())
    s=input()
    a=set()
    b=set()
    for i in range(n):
        if i%2==0:
            b.add(s[i])
        else:
            a.add(s[i])
    flag=True
    for i in a:
        if i in b:
            flag=False
            break
    print("YES" if flag else "NO")
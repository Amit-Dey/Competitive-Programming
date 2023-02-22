for _ in range(int(input())):
    n=int(input())
    if n==0:
        print("1 3 4 5")
        continue
    temp=1
    while n&temp!=0:
        temp=temp<<1
    a=temp
    temp=temp<<1
    while n&temp!=0:
        temp=temp<<1
    b=temp
    temp=temp<<1
    while n&temp!=0:
        temp=temp<<1
    c=temp
    d=n|c
    print(a,b,c,d)
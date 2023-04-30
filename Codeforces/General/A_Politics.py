for _ in range(int(input())):
    n,k=map(int,input().split())
    arr =[]
    x=input()
    arr.append(x)
    for i in range(n-1):
        temp=input()
        arr.append(temp)
    cnt = arr.count(x)
    print(cnt)
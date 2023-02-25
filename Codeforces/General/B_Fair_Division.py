for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    flag=True
    two=arr.count(2)
    one=arr.count(1)
    if two%2==0:
        if one%2!=0:
            flag=False
    else:
        if one%2!=0 or one<2:
            flag=False
    print("YES" if flag else "NO")
        
            

for _ in range(int(input())):
    n=int(input())
    arr1=list(map(int,input().split()))
    arr2=list(map(int,input().split()))
    
    zero1=arr1.count(0)
    one1=n-zero1
    
    zero2=arr2.count(0)
    one2=n-zero2
    
    flag=True
    if zero1<zero2 and zero1!=0:
        flag=False
    elif zero1==zero2 and arr1!=arr2:
        flag=False
    elif zero1==n and one2>0:
        flag=False
    elif one1==n and zero2>0:
        flag=False
    print("YES" if flag else "NO")
    
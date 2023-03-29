for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    mn=min(arr)
    cntMin=arr.count(mn)
    print(n-cntMin)
    
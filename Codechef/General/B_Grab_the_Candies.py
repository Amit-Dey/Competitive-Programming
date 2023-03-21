for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    oddSum=0
    evenSum=0
    for i in arr:
        if i%2==0:
            evenSum+=i
        else:
            oddSum+=i
    print("YES" if evenSum>oddSum else "NO")
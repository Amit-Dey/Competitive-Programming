for _ in range(int(input())):
    n,q=map(int,input().split())
    arr=list(map(int,input().split()))
    pref=[0]
    sum=0
    for i in arr:
        sum+=i
        pref.append(sum)
    for pp in range(q):
        l,r,k=map(int,input().split())
        ans = pref[n]-(pref[r]-pref[l-1])+k*(r-l+1)
        print("YES" if ans%2==1 else "NO")
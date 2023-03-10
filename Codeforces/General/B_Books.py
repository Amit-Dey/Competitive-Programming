n,t=map(int,input().split())
arr=list(map(int,input().split()))
r=sm=ans=0
for i in range(n):
    while r<n and sm+arr[r]<=t:
        sm+=arr[r]
        r+=1
    ans=max(ans,r-i)
    sm-=arr[i]
print(ans)
n,k = map(int,input().split())
arr = list(map(int,input().split()))
arr.sort()
# print(arr)
x=k-1
flag=True
for i in range(k,n):
    if arr[x]==arr[i]:
        flag=False
        break
ans = arr[x]

if k==0:
    if arr[0]>1:
        flag=True
        ans=1
print(ans if flag else "-1")
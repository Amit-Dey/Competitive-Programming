s=list(input())
n=len(s)
cnt=0
ans=[]
for i in s:
    if i=='1':
        cnt+=1
    else:
        ans+=i
temp =[1]*cnt
if ans.count('2')==0:
    ans.extend(temp)
else:
    pos=ans.index('2')
    ans = ans[:pos] + temp + ans[pos:]
print(*ans,sep='')
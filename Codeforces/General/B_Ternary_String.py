for _ in range(int(input())):
    s=list(map(int,input()))
    cnt=[0]*4
    l=0
    n=len(s)
    ans=n+1
    for r in range(n):
        dis=s[r]
        cnt[dis]+=1
        while cnt[s[l]]>1:
            cnt[s[l]]-=1
            l+=1
        if cnt[1] and cnt[2] and cnt[3]:
            ans=min(ans,r-l+1)
    print(0 if ans==n+1 else ans)
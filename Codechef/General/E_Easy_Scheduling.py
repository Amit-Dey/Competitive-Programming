import math

for _ in range(int(input())):
    h,p=map(int,input().split())
    k=math.log2(p)
    k=math.floor(k)
    n=(2**h)
    ans = k+ math.floor((n-((2**(k+1))-1))/p)
    print(ans)
    
#### 
  #    author:  Amit Dey
  #    problem link:  https://codeforces.com/problemset/problem/1999/B
#### 

def compute(a,b):
    if a > b: return 1
    if a == b: return 0
    if a < b: return -1

t = 1 
i = 0
t = int(input())
while i<t:
    a1,a2,b1,b2 = map(int,input().split())
    # check all posible cases
    ans = 0
    if compute(a1,b1) + compute(a2,b2) > 0:
        ans += 1
    if compute(a1,b2) + compute(a2,b1) > 0:
        ans += 1
    if compute(a2,b1) + compute(a1,b2) > 0:
        ans += 1
    if compute(a2,b2) + compute(a1,b1) > 0:
        ans += 1
    print(ans)
    i+=1

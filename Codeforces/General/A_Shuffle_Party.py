####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1937/problem/A
####


t = 1
i = 0
t = int(input())        
while i < t:
    n = int(input())
    ans = 1
    while ans*2 <= n:
        ans *= 2
    print(ans)
    i += 1

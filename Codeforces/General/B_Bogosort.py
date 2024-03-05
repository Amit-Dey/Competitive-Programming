####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/1312/B
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    a = list(map(int, input().split()))
    a.sort( reverse = True)
    print(*a)
    
    i += 1

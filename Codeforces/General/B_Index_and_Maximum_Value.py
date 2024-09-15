####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/2007/B
####


t = 1
i = 0
t = int(input())
while i < t:
    n,m = map(int, input().split())
    mx = max(list(map(int, input().split())))
    for j in range(m):
        char, l, r = map(str, input().split())
        l = int(l)
        r = int(r)
        if l<=mx<=r:
            if char == '+':
                mx += 1
            else:
                mx -= 1
        print(mx, end = ' ')
    print()
        
    i += 1

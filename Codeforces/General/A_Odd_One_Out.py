####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/1915/A
####


t = 1
i = 0
t = int(input())
while i < t:
    a,b,c = map(int, input().split())
    if a == b:
        print(c)
    elif a == c:
        print(b)
    else:
        print(a)
    i += 1

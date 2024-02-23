####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/492/A
####


t = 1
i = 0
# t = int(input())
while i < t:
    s = int(input())
    j = 1
    while s > 0:
        s -= (j*(j+1))//2
        if s < 0:
            break
        j += 1
    print(j-1)
    i += 1

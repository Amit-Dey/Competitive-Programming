####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1933/problem/A
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    arr = list(map(int, input().split()))
    sum = 0
    for j in arr:
        sum+= abs(j)
    print(sum)
    i += 1

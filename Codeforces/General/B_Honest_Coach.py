####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/1360/B
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    min_diff = 1000
    for j in range(n-1):
        if a[j+1] - a[j] < min_diff:
            min_diff = a[j+1] - a[j]
    
    print(min_diff)    
    i += 1

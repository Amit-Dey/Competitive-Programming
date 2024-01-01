####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1877/problem/A
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    sum = 0
    nums = list(map(int,input().split()))
    for j in nums:
        sum += j
    print(sum*-1)
    i += 1

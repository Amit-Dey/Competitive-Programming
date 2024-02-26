####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/1690/D
####


t = 1
i = 0
t = int(input())
while i < t:
    n, k = map(int, input().split())
    s = input()
    w = [0] * (n + 1)
    for j in range(1, n + 1):
        w[j] = w[j - 1] + int(s[j - 1] == 'W')    
    
    result = 1000000000
    for j in range(k, n + 1):
        result = min(result, w[j] - w[j - k])
    print(result)
    i += 1

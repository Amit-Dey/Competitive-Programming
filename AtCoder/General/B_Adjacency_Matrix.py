####
#    author:  Amit Dey
#    problem link:  https://atcoder.jp/contests/abc343/tasks/abc343_b
####


t = 1
i = 0
# t = int(input())
while i < t:
    n = int(input())
    adj = []
    for j in range(n):
        adj.append(list(map(int, input().split())))
    
    for j in range(n):
        for k in range(n):
            if adj[j][k] == 1:
                print(k+1, end=' ')
        print()
    i += 1

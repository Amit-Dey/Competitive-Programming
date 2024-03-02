####
#    author:  Amit Dey
#    problem link:  https://atcoder.jp/contests/abc343/tasks/abc343_a
####


t = 1
i = 0
# t = int(input())
while i < t:
    a, b = map(int, input().split())
    temp = a + b
    if temp > 0:
        print(temp-1)
    else:
        print(temp+1)
    i += 1

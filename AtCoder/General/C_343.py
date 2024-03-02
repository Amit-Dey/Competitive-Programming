####
#    author:  Amit Dey
#    problem link:  https://atcoder.jp/contests/abc343/tasks/abc343_c
####


t = 1
i = 0
# t = int(input())
while i < t:
    n = int(input())
    cubic_root = round(n**(1/3))+1
    for j in reversed(range(cubic_root)):
        temp = j**3
        if temp <= n and str(temp) == str(temp)[::-1]:
            print(temp)
            break

    i += 1
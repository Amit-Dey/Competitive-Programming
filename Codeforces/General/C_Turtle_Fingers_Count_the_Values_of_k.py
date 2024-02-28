####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1933/problem/C
####


t = 1
i = 0
t = int(input())
while i < t:
    a, b, l = map(int, input().split())
    ans = set()
    for x in range(20):
        for y in range(20):
            val = (a**x) * (b**y)
            if l % val == 0:
                ans.add(val)
    print(len(ans))
    i += 1

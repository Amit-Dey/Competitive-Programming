####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1948/problem/A
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    if n % 2 == 1:
        print("NO")
    else:
        print("YES")
        a = "AA"
        b = "BB"
        str = ""
        for j in range(n//2):
            if j % 2 == 0:
                str += a
            else:
                str += b
        print(str)
    i += 1

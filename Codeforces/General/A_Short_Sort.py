####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/1873/A
####


t = 1
i = 0
t = int(input())
while i < t:
    str = input()
    cnt = 0
    if str[0] == 'a':
        cnt += 1
    if str[1] == 'b':
        cnt += 1
    if str[2] == 'c':
        cnt += 1

    if cnt > 0:
        print("YES")
    else: 
        print("NO")

    i += 1

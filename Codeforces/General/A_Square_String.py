####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/1619/A
####


t = 1
i = 0
t = int(input())
while i < t:
    str = input()
    strSize = len(str)
    if strSize % 2 == 1:
        print("NO")
    elif str[0: strSize//2] == str[strSize//2:]:
        print("YES")
    else: print("NO")
    i += 1

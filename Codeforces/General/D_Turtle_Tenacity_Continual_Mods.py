####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1933/problem/D
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    if arr[0] != arr[1]:
        print("YES")
        i += 1
        continue
    count = 0
    for j in range(n):
        if arr[j] % arr[0] != 0:
            count += 1
    if count:
        print("YES")
    else:
        print("NO")

    i += 1

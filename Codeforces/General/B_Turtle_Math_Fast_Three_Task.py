####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1933/problem/B
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    arr = list(map(int, input().split()))
    sum = 0
    for j in range(n):
        sum += arr[j]
        arr[j] = arr[j] % 3
    temp = sum % 3

    if temp == 0:
        print(0)
    elif temp in arr or temp == 2:
        print(1)
    else:
        print(2)

    i += 1

####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1923/problem/A
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    arr = list(map(int, input().split()))
    temp = -1
    for j in range(0, n):
        if arr[j] == 1:
            temp = j
            break
    if temp != -1:
        arr = arr[temp:]
    temp = 0
    for j in range(len(arr)-1, -1, -1):
        if arr[j] == 1:
            break
        temp -= 1
    if temp != 0:
        arr = arr[:temp]
    # print(arr)
    ones = arr.count(1)
    zeros = 0
    for j in range(0, len(arr)):
        if arr[j] == 0:
            zeros += 1
    print(zeros)
    i += 1

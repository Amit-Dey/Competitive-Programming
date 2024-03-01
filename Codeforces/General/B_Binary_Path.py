####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1937/problem/B
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    arr = []
    arr.append(list(j for j in input()))
    arr.append(list(j for j in input()))
    x = 0
    y = 0
    ways = 1
    temp = 1
    ans = [arr[0][0]]
    while y < n-1:
        if x == 0 and arr[x+1][y] == arr[x][y+1]:
            ans.append(arr[x][y+1])
            y += 1
            temp += 1
        elif x == 0 and arr[x+1][y] == '1' and arr[x][y+1] == '0':
            ans.append(arr[x][y+1])
            y += 1
            temp = 1
        elif x == 0 and arr[x+1][y] == '0' and arr[x][y+1] == '1':
            ans.append(arr[x+1][y])
            ways = temp
            temp = 1
            x += 1
        else:
            ans.append(arr[x][y+1])
            y += 1
    if x == 0:
        ans.append(arr[x+1][y])
        ways = temp
    for j in ans:
        print(j, end='')
    print()
    print(ways)

    i += 1

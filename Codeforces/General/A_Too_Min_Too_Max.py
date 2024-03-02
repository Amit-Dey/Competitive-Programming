####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1934/problem/A
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    ans = abs(arr[0]-arr[n-2])+abs(arr[n-2]-arr[1])+abs(arr[1]-arr[n-1])+abs(arr[n-1]-arr[0])
    print(ans)
    i += 1
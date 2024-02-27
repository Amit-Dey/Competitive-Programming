####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/1798/B
####


t = 1
last = [0]*50700
i = 0
t = int(input())
while i < t:
    m = int(input())
    Perticipants = []
    
    for j in range(m):
        n = int(input())
        temp = list(map(int, input().split()))
        for x in temp:
            last[x] = j
        Perticipants.append(temp)
    
    ans = [-1]*m
    for j in range(m):
        for k in Perticipants[j]:
            if last[k] == j:
                ans[j] = k
        if ans[j] == -1:
            print(-1)
            break
    else:
        print(*ans)
    i += 1

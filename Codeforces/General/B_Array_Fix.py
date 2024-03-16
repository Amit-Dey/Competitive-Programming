####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/contest/1948/problem/B
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    arr = list(map(int, input().split()))
    
    mx = 0
    flag = False
    for j in arr:
        if j < mx:
            flag = True
            break
        else:
            x = j//10
            y = j%10
            if x >= mx:
                if y >= x:
                    mx = y
                else:
                    mx = j
            else:
                mx = j
    if flag:
        print("NO")
    else:
        print("YES")
    i += 1
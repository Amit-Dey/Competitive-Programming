####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/1779/B
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    arr = [-1 if j%2 else 1 for j in range(n)]
    if n%2:
        if n>=5:
            x=n//2
            y=x-1
            for j in range(n):
                if j%2:
                    arr[j] *= x
                else:
                    arr[j] *= y
            print("YES")
            print(*arr)
        else:
            print("NO")
    else:
        print("YES")
        print(*arr)
    i += 1

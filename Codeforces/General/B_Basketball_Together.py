####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/1725/B
####


t = 1
i = 0
# t = int(input())
while i < t:
    n,d=map(int,input().split())
    arr=sorted(list(map(int,input().split())))
    arr=arr[::-1]
    
    c=0
    teams=0
    for i in arr:
        z=d//i
        z+=1
        # print(i,":",z)
        if z>n-c:
            break
        if i*z>d:
            c+=z
            teams+=1
        else:
            break
    print(teams)
    i += 1

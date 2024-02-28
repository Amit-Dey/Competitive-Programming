####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/1921/B
####


t = 1
i = 0
t = int(input())
while i < t:
    n = int(input())
    s = input()
    f = input()
    
    if s == f:
        print(0)
    elif s.count('0') == n:
        print(f.count('1'))
    elif s.count('1') == n:
        print(f.count('0'))
    else:
        cnt = 0
        cn = 0
        for j in range(n):
            if s[j] == '1' and  f[j]=='0':
                cnt += 1 
            elif s[j] == '0' and  f[j]=='1':
                cn += 1
        if cnt == cn:
            print(cnt)
        elif cnt > cn:
            print(cnt)
        else:
            print(cn)
    i += 1

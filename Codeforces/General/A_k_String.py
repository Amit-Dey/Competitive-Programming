####
#    author:  Amit Dey
#    problem link:  https://codeforces.com/problemset/problem/219/A
####


t = 1
i = 0
# t = int(input())
while i < t:
    n = int(input())
    s = input()
    frequency = {}
    for c in s:
        if c in frequency:
            frequency[c] += 1
        else:
            frequency[c] = 1
    flag = True
    for key in frequency:
        if frequency[key] % n != 0:
            flag = False
            break
    if flag:
        result = ''
        for key in frequency:
            result += key * (frequency[key] // n)
        print(result * n)
    else:
        print(-1)
    
    i += 1
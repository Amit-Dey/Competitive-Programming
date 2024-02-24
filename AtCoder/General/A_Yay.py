####
#    author:  Amit Dey
#    problem link:  https://atcoder.jp/contests/abc342/tasks/abc342_a
####


t = 1
i = 0
# t = int(input())
while i < t:
    s = input()
    temp = s.count(s[0])
    if temp == 1:
        print("1")
    else:
        for j in range(1, len(s)):
            if s[0] != s[j]:
                print(j+1)
                break
    i += 1

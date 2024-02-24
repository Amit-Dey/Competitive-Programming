####
#    author:  Amit Dey
#    problem link:  https://atcoder.jp/contests/abc342/tasks/abc342_b
####


t = 1
i = 0
# t = int(input())
while i < t:
    n = int(input())
    position = list(map(int, input().split()))
    q = int(input())
    for j in range(q):
        a, b = map(int, input().split())
        positionOfa = position.index(a)
        positionOfb = position.index(b)
        if positionOfa < positionOfb:
            print(position[positionOfa])
        else:
            print(position[positionOfb])
    i += 1

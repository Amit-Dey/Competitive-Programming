####
#    author:  Amit Dey
#    problem link:  https://www.codechef.com/START122D/problems/MATCH_ALK
####


t = 1
i = 0
t = int(input())
while i < t:
    motm = []
    for j in range(22):
        a, b = map(int, input().split())
        motm.append(a+(b*20))
    print(motm.index(max(motm))+1)
    i += 1

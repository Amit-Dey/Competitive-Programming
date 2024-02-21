#### 
  #    author:  Amit Dey
  #    problem link:  https://www.codechef.com/START122D/problems/PBREV
#### 


t = 1 
i = 0
t = int(input())
while i<t:
    n = int(input())
    judge = list(map(int, input().split()))
    flag = True
    for j in judge:
        if j <= 4:
            flag = False
            break
    print("YES") if flag else print("NO")
    i+=1

#### 
  #    author:  Amit Dey
  #    problem link:  https://codeforces.com/contest/1926/problem/B
#### 


t = 1 
i = 0
t = int(input())
while i<t:
    n = int(input())
    grid = []
    for j in range(n):
        grid.append(input())
    grid_1 = []
    for j in range(n):
        temp = grid[j].count('1')
        if temp>0:grid_1.append(temp)
    flag = False
    for j in grid_1:
        if grid_1[0]!=j:
            flag = True
            break
    if flag:print('TRIANGLE')
    else:print('SQUARE')
    i+=1

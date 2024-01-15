#### 
  #    author:  Amit Dey
  #    problem link:  https://codeforces.com/contest/1921/problem/A
#### 


t = 1 
i = 0
t = int(input())
while i<t:
    x1,y1 = map(int, input().split())
    x2,y2 = map(int, input().split())
    x3,y3 = map(int, input().split())
    x4,y4 = map(int, input().split())
    
    if x1 == x2:
        print(abs(y1-y2)*abs(y4-y3))
    elif x1 == x3:
        print(abs(y1-y3)*abs(y4-y2))
    elif x1 == x4:
        print(abs(y1-y4)*abs(y3-y2))
        
    i+=1

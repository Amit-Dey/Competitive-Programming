#### 
  #    author:  Amit Dey
  #    problem link:  https://codeforces.com/problemset/problem/1850/A
#### 


t = 1 
i = 0
t = int(input())
while i<t:
  a,b,c = list(map(int,input().split()))
  x = a+b
  y= a+c
  z = b+c
  if x>=10 or y>=10 or z>=10:
    print("YES")
  else:
    print("NO")
  i+=1

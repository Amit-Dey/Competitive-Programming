#### 
  #    author:  Amit Dey
  #    problem link:  https://codeforces.com/contest/1926/problem/A
#### 


t = 1 
i = 0
t = int(input())
while i<t:
  n = input()
  print('A' if n.count('A')>n.count('B') else 'B')
  i+=1

#### 
  #    author:  Amit Dey
  #    problem link:  https://codeforces.com/problemset/problem/749/A
#### 


t = 1 
i = 0
#t = int(input())
while i<t:
  n = int(input())
  if n%2 == 0:
    print(int(n/2))
    print("2 "*int(n/2))
  else:
    print(int(n/2))
    print("2 "*(int(n/2)-1)+"3")
  i+=1

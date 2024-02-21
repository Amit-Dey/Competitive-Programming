#### 
  #    author:  Amit Dey
  #    problem link:  https://codeforces.com/contest/1926/problem/C
#### 

arr = [0]
for j in range(1, 2*(10**5)+1):
    arr.append(arr[j-1]+sum(list(map(int, str(j)))))
    
t = 1 
i = 0
t = int(input())
while i<t:
  n = int(input())
  print(arr[n])
  i+=1

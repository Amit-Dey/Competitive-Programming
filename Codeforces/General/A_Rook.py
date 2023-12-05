#### 
  #    author:  Amit Dey
  #    problem link:  https://codeforces.com/contest/1907/problem/A
#### 


t = 1 
i = 0
t = int(input())
while i<t:
  str = input()
  for j in range(8):
    if ord(str[1])-ord('0') == j+1:
      continue
    else:
        print(f'{str[0]}{j+1}')
        
  for j in range(8):
      if ord(str[0])-ord('a') == j:
          continue
      else:
            print(f'{chr(ord("a")+j)}{str[1]}')
  
  i+=1

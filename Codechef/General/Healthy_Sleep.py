#### 
  #    author:  Amit Dey
  #    problem link:  https://www.codechef.com/START122D/problems/HEALSE
#### 


t = 1 
i = 0
#t = int(input())
while i<t:
    n = int(input())
    if n < 8:
        print("LESS")
    elif n == 8:
        print("PERFECT")
    elif n > 8:
        print("MORE")      
    i+=1

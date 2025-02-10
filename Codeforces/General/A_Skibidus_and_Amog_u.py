#### 
  #    author:  Amit Dey
  #    problem link:  https://codeforces.com/contest/2065/problem/0
#### 


t = 1 
i = 0
t = int(input())
while i<t:
    # n = int(input())
    str = input()
    # print(str)
    # replace all 'us' which are at the end of the string with 'i'
    #  only the last 'us' will be replaced
    str = str[::-1].replace('su','i',1)[::-1]
    print(str)
 
    i+=1

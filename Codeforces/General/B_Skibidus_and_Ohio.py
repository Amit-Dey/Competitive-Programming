#### 
  #    author:  Amit Dey
  #    problem link:  https://codeforces.com/contest/2065/problem/B
#### 


t = 1 
j = 0
t = int(input())
while j<t:
# Skibidus is given a string s
#  that consists of lowercase Latin letters. If s
#  contains more than 1
#  letter, he can:

# Choose an index i
#  (1≤i≤|s|−1
# , |s|
#  denotes the current length of s
# ) such that si=si+1
# . Replace si
#  with any lowercase Latin letter of his choice. Remove si+1
#  from the string.
# Skibidus must determine the minimum possible length he can achieve through any number of operations.

# Help Skibidus to find the minimum possible length of the string that can be achieved.
    s = input()
    n = len(s)
    i = 0
    while i<n-1:
        if s[i] == s[i+1]:
            s = s[:i]+s[i+1:]
            n-=1
        else:
            i+=1
    print(n)
    
    
    
  
    j+=1

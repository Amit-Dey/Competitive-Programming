s=input()
x=len(s)
ans=(1<<x)-2

j=len(s)-1
for i in s:
    if i!='4':
        ans+=(2**j)
    j-=1
print(ans+1)

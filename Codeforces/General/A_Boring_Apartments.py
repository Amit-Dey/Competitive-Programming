for _ in range(int(input())):
    s=input()
    x=int(s[0])
    ans= (x-1)*10 
    x=len(s)
    ans+= ((x+1)*x)//2
    print(ans)

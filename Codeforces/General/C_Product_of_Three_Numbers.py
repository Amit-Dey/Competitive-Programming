for _ in range(int(input())):
    n=int(input())
    a=b=c=0
    
    a=2
    while a*a*a<=n:
        if n%a==0:
           break 
        a+=1
    
    rem=n//a
    b=a+1
    while b*b<=rem:
        if rem%b==0:
            c=rem//b
            if b>=c:
                c=0
            break
        b+=1
    print(f"YES \n {a} {b} {c}" if a*b*c==n else "NO")

for _ in range(int(input())):
    x,y=map(int,input().split())
    print(y if x>=y else x+(y-x)*2)
for _ in range(int(input())):
    n,k=map(int,input().split())
    s=input()
    dic=[0]*60
    for i in s:
        dis = int(ord(i)-ord('A'))
        print(dis,end=' ')
        dic[dis]+=1
    print(dic)
    # for i in range(ord('a'),ord('z')+1):
    # print(chr(i))
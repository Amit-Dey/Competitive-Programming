for _ in [0]*int(input()):
    n, k = map(int, input().split())
    i = 1
    while k > i:
        k -= i
        i += 1
    print('a'*(n-i-1)+'b'+'a'*(i-k)+'b'+'a'*(k-1))


            
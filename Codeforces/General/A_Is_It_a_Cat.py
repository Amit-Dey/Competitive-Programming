def rd(s):
    if len(s) < 2:
        return s
    if s[0] != s[1]:
        return s[0]+rd(s[1:])
    return rd(s[1:])

for _ in range(int(input())):
    n=int(input())
    s=input()
    s=s.lower()
    s=rd(s)
    print("YES" if s=="meow" else "NO")
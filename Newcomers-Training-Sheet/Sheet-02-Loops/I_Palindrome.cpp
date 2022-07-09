/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
 * 
**/

#include <stdio.h>
#include<stdlib.h>
#define ll long long
int count(int ll x)
{
    int c=0;
    while(x)
    {
        x/=10;
        c++;
    }
    return c;
}

int main(){
    int ll n,b=1,m=0,x;
    scanf("%lld",&n);
    x=n;
    int l=count(n);
    for(int ll i=1;i<l;i++)
        b*=10;
        
    m=(x%10)*b;
    x/=10;
    b/=10;
    for(int ll i=0;x>0;i++){
        m+=(x%10)*b;
        x/=10;
        b/=10;
    }
    printf("%lld\n",m);
    if(n==m)
    printf("YES\n");
    else printf("NO\n");
    return 0;
}
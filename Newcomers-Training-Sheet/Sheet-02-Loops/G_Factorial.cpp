/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
 * 
**/

#include <stdio.h>
#define ll long long

int main(){
   ll int n,x,y=1;
   scanf("%lld",&n);
   for(int i=1;i<=n;i++){
        scanf("%lld",&x);
        while(x)y*=x--;
        printf("%lld\n",y);
        y=1;
   }
    return 0;
}
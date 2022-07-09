/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
 * 
**/
#include <stdio.h>

int main(){
   int n;
   long long int x,m=0;
   scanf("%d",&n);
   while(n--){
       scanf("%lld",&x);
       if(m<x)m=x;
   }
   printf("%lld\n",m);
    return 0;
}
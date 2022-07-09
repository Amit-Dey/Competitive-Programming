/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
 * 
**/

#include <stdio.h>
#define ll long long

int main(){  
   ll int n;
   scanf("%lld",&n);
   for(int i=2;i<n;i++){
        if(n%i==0){
            printf("NO\n");
            return 0;
        }
   }
    printf("YES\n");
    return 0;
}
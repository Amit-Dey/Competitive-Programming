/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
 * 
**/

#include <stdio.h>
#define ll long long
int main(){
	ll int n;
	scanf("%lld",&n);
    ll int a,sum=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&a);
        sum+=a;
    }
    if(sum<0)sum*=-1;
    printf("%lld",sum);
	return 0;
}
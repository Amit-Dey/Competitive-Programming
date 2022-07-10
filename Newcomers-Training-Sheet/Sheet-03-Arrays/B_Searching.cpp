/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
 * 
**/

#include <stdio.h>
#define ll long long
int main(){
	ll int n,d,c=0,l=0;
	scanf("%lld",&n);
    ll int arr[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    scanf("%lld",&d);
    for(int i=0;i<n;i++){
        if(arr[i]==d){
            c=i;
            l=1;
            break;
        }
    }
    if(l==0){
        printf("-1\n");
        return 0;
    }
    printf("%lld\n",c);
	return 0;
}
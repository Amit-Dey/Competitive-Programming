/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
 * 
**/

#include<stdio.h>

int main()
{   int size;
    long long int N[100000];
    scanf("%d",&size);
    for(int k=1;k<=size;k++){ 
        scanf("%lld",&N[k]);
    }
    for(int i=size;i>0;i--){
        printf("%lld ",N[i]);
    }
    
}
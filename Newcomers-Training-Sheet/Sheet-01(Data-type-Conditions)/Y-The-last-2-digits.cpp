/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
 * 
**/

#include<stdio.h>

int main()
{   long long int a,b,c,d,x;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    x=(((a%100)*(b%100)*(c%100)*(d%100))%100);
    if(x==0){
        printf("00");
    }
    else if(x>=1&&x<=9){
        printf("0%d",x);
    }
    else
    printf("%d",x);

    return 0;
}
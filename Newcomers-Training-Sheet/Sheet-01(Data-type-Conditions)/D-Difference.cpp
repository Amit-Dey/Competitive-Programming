/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
 * 
**/

#include <stdio.h>

int main(){   
    long long int A,B,C,D;
    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
    printf("Difference = %lld\n",((A*B)-(C*D)));
    return 0;
}
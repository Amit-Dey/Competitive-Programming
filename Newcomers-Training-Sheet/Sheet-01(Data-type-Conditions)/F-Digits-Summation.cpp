/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
 * 
**/
#include <stdio.h>
  
int main(){

    long long int N, M, sum;
    scanf ("%lld %lld", &N, &M);
    sum = ((N % 10) + (M % 10));
    printf ("%lld", sum);
    return 0;
}

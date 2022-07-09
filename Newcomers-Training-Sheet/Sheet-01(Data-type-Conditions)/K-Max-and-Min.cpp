/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
 * 
**/

#include <stdio.h>

int main(){
    long long int A, B,C,min,max;
    scanf ("%lld %lld %lld", &A, &B,&C);
    if (A>B){
        min=B;
        max=A;
    }
    else{
        min=A;
        max=B;
    }
    if (max<C){
        max=C;
    }
    else if (min>C){
        min=C;
    }
    printf("%lld %lld",min,max);

    return 0;
}
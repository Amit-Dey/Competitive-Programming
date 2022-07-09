/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
 * 
**/

#include <stdio.h>

int main (){
    long long int A, B;
    scanf ("%lld %lld", &A, &B);
    if (A % B == 0 || B % A == 0){
        printf ("Multiples");
    }
    else{
        printf ("No Multiples");
    }
    return 0;
}
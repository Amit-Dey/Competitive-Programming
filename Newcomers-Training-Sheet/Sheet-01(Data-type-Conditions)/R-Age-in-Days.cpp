/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
 * 
**/

#include<stdio.h>
 
int main()
{   int days;
    scanf("%d",&days);
    printf("%d years\n%d months\n%d days",(days/365),((days%365)/30),((days%365)%30));
    return 0;
}
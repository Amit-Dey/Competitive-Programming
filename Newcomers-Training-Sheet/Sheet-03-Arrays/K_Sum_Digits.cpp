/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
 * 
**/

#include<stdio.h>
int main()
{   int size;
    long int N[1000000],result=0;

    scanf("%d",&size);
    for(int k=1;k<=size;k++){
        scanf("%1ld",&N[k]);
    }
    for(int i=1;i<=size;i++){
        result+=N[i];
    }
    printf("%ld\n",result);

}
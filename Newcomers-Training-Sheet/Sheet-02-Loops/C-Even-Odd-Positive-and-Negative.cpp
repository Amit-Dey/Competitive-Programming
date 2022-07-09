/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
 * 
**/

#include <stdio.h>

int main(){
   int n,x,e=0,o=0,p=0,ne=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x%2==0)e++;
        else o++;
        if(x>0)p++;
        if(x<0)ne++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",e,o,p,ne);
    return 0;
}
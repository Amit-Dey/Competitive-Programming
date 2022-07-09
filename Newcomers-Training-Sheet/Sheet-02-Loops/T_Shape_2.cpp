/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
 * 
**/

#include <stdio.h>

int main(){
    int t,a=1,b,sum=0,min=0,max=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        for(int j=t-i-1;j>0;j--){
            printf(" ");
        }
        for(int k=0;k<a;k++){
            printf("*");
        }
        printf("\n");
        a+=2;
    }
    return 0;
}
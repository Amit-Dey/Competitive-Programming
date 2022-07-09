/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
 * 
**/


#include <stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
 * 
**/

#include <stdio.h>

int main(){
    int n,a;
    scanf("%d",&n);
    while(n--){
       scanf("%d",&a);
       if(a==0){
            printf("0\n");
            continue;
        }
       while(a){
            printf("%d ",(a%10));
            a/=10;
       }
       printf("\n");
    }

    return 0;
}
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
 * 
**/


#include <stdio.h>

int main(){
    char s;
    int n;
    scanf("%c %d",&s,&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<arr[i];j++){
            printf("%c",s);
        }
        printf("\n");
    }

    return 0;
}
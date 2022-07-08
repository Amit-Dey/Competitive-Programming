/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/218/problem/A
*
*/

#include <stdio.h>
#include<ctype.h>
#include<fenv.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#define ll long long


int main(){
    int num,k;
    scanf("%d %d",&num,&k);
    int arr[(2*num)+1];
    for(int i=1;i<=((2*num)+1);i++){
        scanf("%d",&arr[i]);
    }
    for(int i=(2*num+1);i>=1;i--){
        if((k>0)&&(i%2==0)&&arr[i]>arr[i-1]+1&&arr[i]>arr[i+1]+1){
            arr[i]--;
            k--;
        }
    }
    for(int i=1;i<=(2*num+1);i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
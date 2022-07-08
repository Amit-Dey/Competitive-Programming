/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/problemset/problem/767/A
*
*/

#include <stdio.h>
#include<ctype.h>
#include<fenv.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#define ll long long
int bb[100010];

int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1],x;
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    x=n;
    for(int i=1;i<=n;i++){
        bb[arr[i]]=1;
        for(int j=x;bb[x]==1;j--)
        {
            printf("%d ",x);
             x--;
        }
        printf("\n");
    
    }
    
    return 0;
}

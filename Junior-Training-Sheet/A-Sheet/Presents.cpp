/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/136/problem/A
*
*/

#include <stdio.h>

int main(){
    int x,a[110],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        a[x]=i;
    }
    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
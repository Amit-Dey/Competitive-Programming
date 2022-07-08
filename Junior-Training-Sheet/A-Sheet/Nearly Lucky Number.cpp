/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/110/problem/A
*
*/

#include<stdio.h>
int main(){
    long long int x,y,c=0;
    scanf("%lld",&x);
    for(;;){
        if(x==0){
            break;
    }

    y=x%10;
    if(y==4 || y==7 ){
        c++;
    }
    x=x/10;
    }
    if(c==4 || c==7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
 * 
**/

#include <stdio.h>
#define ll long long

int main(){
    int a,b,min=0;
    scanf("%d %d",&a,&b);
    min=a;
    if(a>b)min=b;
    for(int i=min;i>0;i--){   
        if((a%i)==0&&(b%i)==0){
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}
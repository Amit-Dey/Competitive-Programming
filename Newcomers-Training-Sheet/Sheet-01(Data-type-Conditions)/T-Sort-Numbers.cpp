/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
 * 
**/

#include <stdio.h>

int main(){
    int a,b,c,x,y,z,temp;
    scanf("%d %d %d",&a,&b,&c);
    x=a;
    y=b;
    z=c;
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    if(b<c){
        temp=b;
        b=c;
        c=temp;
    }
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d\n%d\n%d\n\n",c,b,a);
    printf("%d\n%d\n%d",x,y,z);
    return 0;
}
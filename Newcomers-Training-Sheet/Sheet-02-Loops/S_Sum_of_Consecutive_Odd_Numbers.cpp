/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
 * 
**/

#include <stdio.h>

int main(){
    int t,a,b,sum=0,min=0,max=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        sum=0;
        if(a>b){
            max=a,min=b;
        }
        else max=b,min=a;

        if(min%2==0)min++;
        else min+=2;
        if(max%2==0)max--;
        else max-=2;
        for(int i=min;i<=max;i+=2){
            sum+=i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
 * 
**/

#include <stdio.h>

int main(){
    int a,b,sum=0,min=0,max=0;
    while(scanf("%d %d",&a,&b)){   
        sum=0;
        if(a<=0||b<=0)return 0;
        if(a>b){
            max=a,min=b;
        }
        else max=b,min=a;
        
        for(int i=min;i<=max;i++){
            printf("%d ",i);
            sum+=i;
        }
        printf("sum =%d\n",sum);
    }
    return 0;
}
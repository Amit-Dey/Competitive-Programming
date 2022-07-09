/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
 * 
**/
#include <stdio.h>

int main(){
    int n,a,b,x,c,sum=0;
    scanf("%d",&n);
    int i=1,d=n;
    while(n--)
    {   if(i>3)i++;
        for(int j=i;j<i+3;j++)
        {
            printf("%d ",j);
        }
        printf("PUM\n");
        i+=3;
    }
    return 0;
}
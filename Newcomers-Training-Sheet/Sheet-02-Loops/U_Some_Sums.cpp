/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
 * 
**/

#include <stdio.h>

int main(){
    int n,a,b,x,c,sum=0;
    scanf("%d %d %d",&n,&a,&b);
    for(int i=1;i<=n;i++)
    {   c=0;
        x=i;
        while(x){
            c+=(x%10);
            x/=10;
        }
        if(c>=a&&c<=b)sum+=i;
    }
    printf("%d",sum);
    return 0;
}
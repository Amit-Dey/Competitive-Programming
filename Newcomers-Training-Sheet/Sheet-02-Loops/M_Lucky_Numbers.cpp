/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
 * 
**/

#include <stdio.h>
#define ll long long

int main(){
    int a,b,c=0,min,max,x,l=0;
    scanf("%d %d",&a,&b);
    min=a;
    max=a;
    if(a>b)min=b;
    if(a<b)max=b;
    for(int i=min;i<=max;i++){   
        x=i;
        while(x)
        {   if((x%10)==4||(x%10)==7){   
                c++;
            }
            else{
                c=0;
                break;
            }
            x/=10;
        }
        if(c!=0){
            l++;
            printf("%d ",i);
        }
    }
    if(l==0)printf("-1\n");

    return 0;
}
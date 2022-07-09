/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
 * 
**/

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int arr[9999];

int main(){
    int t,i,j=0,a,n,d,ans;
    scanf("%d",&t);

    while(t>0)
    {   ans=0;
        scanf("%d",&n);
        a=n;
        for(i=0,j=0;a>0;i++){
            if(a%2==1){
                arr[j]=1;
                j++;
            }
            a/=2;
        }
        for(i=j-1;i>=0;i--)
        {   d=pow(2,i);
            ans+=d;
        }
        printf("%d\n",ans);
        t--;
    }
    return 0;
}
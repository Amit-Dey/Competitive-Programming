/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
 * 
**/

#include<stdio.h>
#include<stdbool.h>
int main()
{   int size,count=1;
    long long int N[100000],result=0;
    bool keep_gooing=true;
    scanf("%d",&size);
    for(int k=1;k<=size;k++){ 
        scanf("%lld",&N[k]);
    }
    for(int i=1;i<=size;i++){
        if(keep_gooing==true){
            result=N[i];
            keep_gooing=false;
        }
        if(result>N[i]){
            result=N[i];
            count=i;
        }
    }
    printf("%lld %d\n",result,count);
     
}
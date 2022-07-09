/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
 * 
**/

#include <stdio.h>
#define ll long long

int main(){
    int n,l;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        l=1;
        for(int j=2;j<i;j++){
           if(i%j==0){
               l=0;
               break;
           }
        }
        if(l==1)printf("%d ",i);
    }
    return 0;
}
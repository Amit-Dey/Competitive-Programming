/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
 * 
**/

#include<stdio.h>
int main()
{   int size;
    long long int N[100000],result=-1;
   
    scanf("%d",&size);
    for(int k=0;k<size;k++){ 
        scanf("%lld",&N[k]);
    }
    for(int i=0;i<size;i++){
        if(N[i]<=10){
            printf("A[%d] = %lld\n",i,N[i]);
        }
    }
     
}
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
 * 
**/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int comp(const void *a,const void *b){
    int *p=(int*)a;
    int *q=(int*)b;
    if(*p>*q) return 1;
    else if(*q>*p) return -1;
    else return 0;
}
int main(){
    int a,b;cin>>a>>b;
    int c[a];
    for(int i=0;i<a;i++){
        cin>>c[i];
    }
    qsort(c,a,sizeof(int),comp);
    int count,i=1,k=0,j;
    for(i=1;i<=b;i++){
        count=0;
        for(j=k;j<a;j++){
            if(i==c[j]){
                count++;
            }
            else break;
        }
        k=j;
        cout<<count<<endl;
    }
    return 0;
}

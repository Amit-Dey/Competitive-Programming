/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
 * 
**/

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    char a[1000001];
    scanf(" %[^\n]",a);
    int i=0;
    int j=0;
    int k=0;
    char p;
    for(i=0;a[i];i++){
        if(a[i]==' ' || a[i+1]=='\0'){
            for(k=(a[i]==' '?i-1:i);j<k;j++,k-- ){
                p=a[j];
                a[j]=a[k];
                a[k]=p;
            }
            j=i+1;
        }
    }
    cout<<a<<endl;
}
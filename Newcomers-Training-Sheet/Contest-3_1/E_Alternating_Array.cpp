/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/E
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,x,c=0,p=0;cin>>x;int a[x+1];
    for(i=1;i<=x;i++)cin>>n,(i%2)?(n<0)?c++:p++:(n>0)?c++:p++;
    cout<<min(c,p);
} 
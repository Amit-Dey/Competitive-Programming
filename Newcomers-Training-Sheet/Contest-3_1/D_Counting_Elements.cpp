/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
 * 
**/

#include<bits/stdc++.h>
using namespace std;
vector<bool>v(10e3);
int main(){  
    int n,c=0,i;cin>>n;int a[n];
    for (i=0;i<n;i++)cin>>a[i],v[a[i]]=1;
    for (int i = 0; i < n; i++)if(v[a[i]+1])c++;cout<<c;
} 
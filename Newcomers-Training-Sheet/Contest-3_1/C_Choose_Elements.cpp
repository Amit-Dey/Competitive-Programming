/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
main(){   
    ll int n,k,s=0;cin>>n>>k;
    vector<ll int>v(n);
    for(ll int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=n-1;k>0;i--,k--)s+= max(0ll,v[i]);cout<<s;
} 
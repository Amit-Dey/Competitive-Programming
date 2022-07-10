/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   

    ll int n,q,z,l,r,m,c;
    cin>>n>>q;
    vector<ll int> v;
    for (ll int i = 0; i < n; ++i){
        cin>>z;
        v.push_back(z);
    }
    vector<ll int> ps(n);
    ps[0]=v[0];
    for (ll int i = 1; i < n; ++i){
        ps[i]=v[i]+ps[i-1];
    }
    while(q--){
        cin>>l>>r;
        if(l==1)cout<<ps[r-1]<<endl;
        else if(r==n)cout<<(ps[r-1]-ps[l-2])<<endl;
        else cout<<(ps[r-1]-ps[l-2])<<endl;
    }

    return 0; 
} 
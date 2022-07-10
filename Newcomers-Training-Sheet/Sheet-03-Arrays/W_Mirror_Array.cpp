/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    ll int n,m;
    cin>>n>>m;
    vector<ll int> v(m);
    for (ll int i = 0; i < n; ++i){
        for (ll int j = 0; j < m; ++j){
            cin>>v[j];
        }
        for (ll int k =m-1;k>=0; --k){
            cout<<v[k]<<" ";
        }
        cout<<endl;
    }
    return 0; 
} 
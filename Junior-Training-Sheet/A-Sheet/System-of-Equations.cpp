/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/214/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,m;cin>>n>>m;
    ll x=max(n,m),ans=0;
    for (ll a = 0; a <= x; a++){
        for (ll b = 0; b <=x; b++){
            if((a*a+b)==n&&(a+b*b)==m)ans++;
        }
    }
    cout<<ans<<endl;

    return 0; 
}
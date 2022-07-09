/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/581/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){
    ll n,m;cin>>n>>m;
    ll mn=min(n,m);
    n-=mn;
    m-=mn;
    cout<<mn<<' '<<max(m,n)/2<<endl;
    return 0; 
}

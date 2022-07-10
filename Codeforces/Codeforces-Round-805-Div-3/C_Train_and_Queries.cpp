/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/contest/1702/problem/C
 * 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){
    ll t;cin>>t;
    while (t--){
        ll n,m;cin>>n>>m;
        vector<ll>v(n+1);
        map<ll,ll>mp,mq;

        for (ll i = 1; i <=n; i++){
            cin>>v[i];
            if(!mp[v[i]]){
                mp[v[i]]=i;
            }
            mq[v[i]]=i;
        }
        ll p,q;
        while (m--){
            cin>>p>>q;
            bool ok=true;
            if(mp[p]==0||mp[q]==0)ok=false;
            else if(mp[p]>=mq[q])ok=false;

            if(ok)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }    
    
    return 0; 
}
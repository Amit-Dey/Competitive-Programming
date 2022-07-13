/**
 *    author:  Amit Dey
 *    problem link: https://www.codechef.com/START47C/problems/HEIGHTS
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){
    ll t;cin>>t;
    while (t--){
        
        ll n;cin>>n;
        ll x;
        map<ll,ll>mp;
        ll mx=INT_MIN,mn=INT_MAX;
        for (ll i = 0; i < n; i++){
            cin>>x;
            mx=max(mx,x);
            mp[x]++;
        }
        ll cnt=0;
        ll y=INT_MAX;
        for(auto i:mp){
            if(i.second==1)cnt++,y=i.first;
            else mn=min(mn,i.second);
        }
        ll ans=0;
        if(cnt==1&&y==mx){
            bool flag=0;
            for(auto i:mp){
                if(i.second>2){
                    ans=1;
                    flag=1;
                    break;
                }
            }
            if(!flag)ans=mn;
        }
        else ans = (ll)ceil(cnt/2.0);

        cout<<ans<<endl;
    }
    
    return 0; 
}
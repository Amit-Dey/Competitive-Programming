/**
 *    author:  Amit Dey
 *    problem link: https://www.codechef.com/START47C/problems/ENDSORTED
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){
    ll t;cin>>t;
    while (t--){
        ll n,x;cin>>n;
        ll mn=INT_MAX,mx=INT_MIN,imx,imn;
        for (ll i = 0; i < n; i++){
            cin>>x;
            if(x>mx){
                mx=x;
                imx=i+1;
            }
            if(x<mn){
                mn=x;
                imn=i+1;
            }
        }
        ll ans= (imn-1)+(n-imx);
        if(imn>imx)ans--;
        // cout<<imn<<' '<<imx<<' ';
        cout<<ans<<endl;
    }
    
    
    
    return 0; 
}
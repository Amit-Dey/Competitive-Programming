/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/79/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int n,m,k,t,x,y,ans,flag;
    cin>>n>>m>>k>>t;
    vector<ll>v;
    while(k--){
        cin>>x>>y;
        x--,y--;
        v.push_back((x*m)+y);
    }
    sort(v.begin(),v.end());
    string s[3]={"Carrots","Kiwis","Grapes"};
    while(t--){
        cin>>x>>y;
        x--,y--;
        flag=(x*m)+y;
        ans=lower_bound(v.begin(), v.end(),flag)-v.begin();
        if(ans<v.size()&&v[ans]==flag){
            cout<<"Waste"<<endl;
        }
        else{
            flag-=ans;
            cout<<s[flag%3]<<endl;
        }
    }
    
    return 0;
}
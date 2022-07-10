/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/contest/1702/problem/E
 * 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool flag;

void dfs(ll i, vector<ll> adj[],ll color[]){
    ll n=adj[i].size();
    for(ll j=0;j<n;j++){
        if(color[adj[i][j]]==-1){
            color[adj[i][j]]=1-color[i];
            dfs(adj[i][j], adj, color);
        }else if(color[i]==color[adj[i][j]]){
            flag=1;
            break;
        }
    }
}
int main(){
    ll t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n;
        flag=0;
        vector<ll>adj[n+1];
        ll color[n+1];
        for(ll i=1; i<=n; i++){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
            color[i]=-1;
        }
        
        for(ll i=1;i<=n; i++){
            if(adj[i].size()>2){
                flag=1;
                break;
            }
        }
        
        for(ll i=1; i<=n && flag==0; i++){
            if(color[i]==-1){
                color[i]=0;
                dfs(i,adj,color);
            }
        }
        
        if(flag==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
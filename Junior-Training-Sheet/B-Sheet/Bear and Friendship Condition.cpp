/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/791/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj(150000); 
vector<bool> vis(150000);
int eg,nd;
void dfs(int n) {
	vis[n]=true;
	nd++;
	eg+=adj[n].size();
	for(int child:adj[n]) {
		if (!vis[child])
			dfs(child);
	}
}

int main(){
	long long n,m,u,v;cin>>n>>m;
	while (m--){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}	
	for (long long i = 1; i <=n; i++){
		if(!vis[i]){
			nd=0,eg=0;
			dfs(i);
			if(eg!=(long long)nd*(nd-1)){
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES"<<endl;
	return 0; 
} 
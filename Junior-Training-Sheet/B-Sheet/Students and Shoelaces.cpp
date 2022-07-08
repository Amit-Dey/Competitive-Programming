/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/129/problem/B
*
*/

	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long

	int n,m,ans=0,cnt[110]{0};
	vector<int> adj[110];

	int main(){   
				    	
	    	cin >> n >> m;
	    	for(int i=1;i<=m;i++){
	    		int a,b;
	    		cin >> a >> b;
	    		cnt[a]++;
	    		cnt[b]++;
	    		adj[a].push_back(b);
	    		adj[b].push_back(a);
	    	}

	    	while(1){
    			vector<int> v;
    			for(int i=1;i<=n;i++){
    				if(cnt[i] == 1){
    					v.push_back(i);
    				}
    			}
    			if(v.empty()) break;
    			ans++;
    			for(int i:v){
    				cnt[i]--;
    				for(int j:adj[i])
    					cnt[j]--;
    			}
    		}
    	cout<<ans<<endl;	    	
	    
	    return 0;
	}
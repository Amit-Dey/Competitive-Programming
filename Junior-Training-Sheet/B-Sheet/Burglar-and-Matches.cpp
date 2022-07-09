/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/16/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(pair<int,int> a, pair<int,int>b){
	return a.second>b.second;
}

int main(){
       
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>>v(m);
	for(auto &i:v)cin>>i.first>>i.second;

	sort(v.begin(),v.end(),comp);
	
	int ans=0,i=0;
	while(n!=0){
		if (i==m)break;
		if(v[i].first>=n){
			ans+=(n*(v[i].second));
			n=0;
		}
		else {
			n-=v[i].first;
			ans+=(v[i].first*v[i].second);
		}
		i++;
	}
	cout<<ans;

	return 0;
}
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/463/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	ll int n,ans=0;
	cin>>n;
	vector<ll int>v(n);
	for(auto &i:v)cin>>i;
	ll int en=0,x=0;
	for(ll int i=0;i<n;i++){
		en+=(x-v[i]);
		if (en<0){
			ans+= -en;
			en=0;
		}
		x=v[i];
	}
	cout<<ans<<endl;
	
	return 0;
}

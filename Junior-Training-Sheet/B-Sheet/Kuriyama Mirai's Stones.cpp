/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/433/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin>>n;
	vector<long long>v(n),vv;
	for(auto &i:v)cin>>i;
	vv=v;
	sort(vv.begin(),vv.end());
	for (int i = 1; i < n; i++){
		v[i]+=v[i-1];
		vv[i]+=vv[i-1];
	}
	long long x,l,r,q;cin>>q;
	while (q--)
	{	cin>>x>>l>>r;
		if(x==1){
			if(l==1)cout<<v[r-1]<<endl;
			else cout<<v[r-1]-v[l-2]<<endl;
		}
		else{
			if(l==1)cout<<vv[r-1]<<endl;
			else cout<<vv[r-1]-vv[l-2]<<endl;
		}	
	}
	return 0; 
} 
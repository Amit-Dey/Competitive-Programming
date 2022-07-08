/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/227/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){   

	ll int n,z;
	cin>>n;
	ll int arr[n+1];
	for (int i =1; i <=n; ++i){
		cin>>z;
		arr[z]=i;
	}
	ll int t,x,v=0,p=0,c;
	cin>>t;
	while(t--){
		cin>>x;
		c=arr[x];
		v+=c;
		p+=(n-c)+1;
	}
	cout<<v<<" "<<p<<endl;
	
}
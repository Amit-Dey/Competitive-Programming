/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/69/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	ll int n;cin>>n;
	ll int x,arr[n]={0,0,0};
	for(ll int i=0;i<n;i++){
		for(ll int j=0;j<3;j++){
			cin>>x;
			arr[j]+=x;
		}
	}
	for(int i=0;i<3;i++){
		if (arr[i]!=0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	
	return 0;
}

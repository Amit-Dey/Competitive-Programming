/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/363/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
int n,k,a[200000],mn=1e9,ans;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(int i=0;i<=n-k;i++){
		if(mn>a[i+k]-a[i]){
			ans=i+1;
			mn=a[i+k]-a[i];
		}
	}
	cout<<ans;
	return 0;
}
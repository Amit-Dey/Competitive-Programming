/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/680/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	int n,a;
	cin>>n>>a;
	vector<int>v(n);
	for(auto &i:v)cin>>i;

	int ans=0,x,y;
	a--;
	if (v[a]==1)ans++;
	for(int i=1;;i++){
		x=(a-i);
		y=(a+i);
		// if(x<0&&y>(n-1))break;
		if (x>=0&&y<n){
			if(v[x]==1&&v[y]==1)ans+=2;
		}
		else if(x>=0){
			if (v[x]==1){
				ans++;
			}
		}
		else if(y<n){
			if (v[y]==1){
				ans++;
			}
		}
		else break;
	}
	cout<<ans<<endl;

	return 0;
}
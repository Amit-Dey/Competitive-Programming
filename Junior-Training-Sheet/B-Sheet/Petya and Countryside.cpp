/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/66/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
	
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &i:v)cin>>i;

	int x=v[0],ans=1,c=1;
	bool ok=true;
	for(int i=1;i<n;i++){
		if (v[i]>v[i-1])
		{	ok=false;
			c=1;
			for(int j=i;j>0&&(v[j-1]<=v[j]);j--){
				c++;
			}
			for(int j=i;j<(n-1)&&(v[j]>=v[j+1]);j++){
				c++;
				i++;
			}
			ans=max(c,ans);
		}

	}
	if (ok){
		ans=n;
	}
	cout<<ans<<endl;

	return 0;
}
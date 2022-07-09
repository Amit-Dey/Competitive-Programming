/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/525/problem/B
*
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;int m,n,a;
	cin>>s>>m;
	vector<int>v(100001);
	for(int i=0;i<m;i++){
		cin>>a;v[a]++;
	}
	n=s.size();
	for(int i=1;i<n-i+1;i++){
		v[i]+=v[i-1];
		if(v[i]%2==1){swap(s[i-1],s[n-i]);}
	}
 	cout<<s<<endl;
}

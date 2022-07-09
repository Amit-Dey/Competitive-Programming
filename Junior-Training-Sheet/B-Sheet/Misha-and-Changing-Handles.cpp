/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/501/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	string a,b;
	map<string,string>m;
	while (t--){	
		cin>>a>>b;
		if(m[a]!="")m[b]=m[a];
		else m[b]=a;
			m.erase(a);
	}
	cout<<m.size()<<endl;
	for(auto i:m)cout<<i.second<<' '<<i.first<<endl;
	return 0; 
} 
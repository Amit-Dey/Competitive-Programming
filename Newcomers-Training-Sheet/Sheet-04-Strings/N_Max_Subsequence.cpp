/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/N
 * 
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	string s,g;
	cin>>s;
	
	for (int i = 0; i <n; i++){
		if(s[i]!=s[i+1]){
			g+=s[i];
		}
	}
	cout<<g.size()<<endl;
	return 0;
}
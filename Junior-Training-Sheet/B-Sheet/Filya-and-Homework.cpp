/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/714/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define b begin
#define e end
int main(){
	ll int n,x;cin>>n;set<int>s;
   	for (int i = 0; i < n; ++i){
   		cin>>x;s.insert(x);
   	}
   	n=s.size();
	if(n<3||(n==3&&(*++s.b() - *s.b()== *--s.e() - *++s.b())))
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
    return 0;
}
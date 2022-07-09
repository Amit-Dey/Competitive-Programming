/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   

	ll int a,b,c,d;
	cin>>a>>b>>c>>d;

	if(log(a)*sqrt(b)>log(c)*sqrt(d))
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
    return 0; 
} 
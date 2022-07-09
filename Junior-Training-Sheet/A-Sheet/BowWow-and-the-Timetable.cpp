/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/1204/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
       
	string s;
	cin>>s;
	int ln =s.size(),ans;
	if(ln%2==0){
		ans=ln/2;
		cout<<ans<<endl;
	}
	else {
		ans=ln/2;
		for (int i =1; i <ln; ++i){
			if(s[i]=='1'){
				ans++;
				break;
			}
		}
		cout<<ans<<endl;
	}
	
}

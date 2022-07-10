/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
	ll int n,ans=0;
	cin>>n;
	string s;cin>>s;
	for (int i = 0; i < n; ++i){
		if(s[i]=='V')ans+=5;
		else if(s[i]=='W')ans+=2;
		else if(s[i]=='X')i++;
		else if(s[i]=='Y'){
			n++;i++;
			s.push_back(s[i]);
			continue;
		}
		else if(s[i]=='Z'){
			if(s[i+1]=='V'&&(i+1)<n){
				ans/=5;
				i++;
			}
			else if(s[i+1]=='W'&&(i+1)<n){
				ans/=2;
				i++;
			}
			continue;
		}
	}
	cout<<ans<<endl;
    return 0; 
} 
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/41/problem/A
*
*/

	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long

	int main(){   
	    
	    string a,b;
	    cin>>a>>b;
	    reverse(b.begin(), b.end());
	    if (a==b){
	    	cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	    
	    return 0;
	}

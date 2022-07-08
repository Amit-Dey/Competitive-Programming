/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/456/problem/A
*
*/

	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long

	int main(){   
	    int n,x,y;
	    bool z=0;
	    cin>>n;
	    for(int i=0;i<n;i++){
	    	cin>>x>>y;
	    	if(x!=y)
	    		z=1;
	    }
	    cout<<(z?"Happy Alex":"Poor Alex");
	    
	    return 0;
	}

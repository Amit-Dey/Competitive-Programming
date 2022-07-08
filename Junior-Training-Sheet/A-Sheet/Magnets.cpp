/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/344/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   

    int t;cin>>t;
    int p;cin>>p;
    int c=1;
    int x=0;
    for (int i = 0; i < t-1; ++i){
    	/* code */
    	cin>>x;
    	if(x!=p){
    		p=x;
    		c++;
    	}
    }
    cout<<c<<endl;
    
    return 0; 
} 
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/268/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   

    int n;cin>>n;
    int x[n],y[n],count=0;
    for (int i = 0; i < n; ++i){
    	/* code */
    	cin>>x[i]>>y[i];
    }
    for (int i = 0; i < n; ++i){
    	/* code */
    	for (int j = 0; j < n; ++j){
    		/* code */
    		if(x[i]==y[j])count++;
    	}
    }
    cout<<count<<endl;
    return 0; 
} 
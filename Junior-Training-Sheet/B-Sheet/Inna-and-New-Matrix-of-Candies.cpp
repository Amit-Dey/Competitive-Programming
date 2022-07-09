/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/400/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,p,a,ans=0;cin>>n>>m;
    char c;bool ok=true;set<int>s;
    for(int i=0;i<n;++i){
    	for (int j=1;j<=m;++j){
    		cin>>c;if(c=='G')p=j;
    		if(c=='S')a=j;
    	}
    	if(a<p)ok=false;
    	s.insert(a-p);
    }
    (ok)?cout<<s.size():cout<<"-1";

    return 0;
}
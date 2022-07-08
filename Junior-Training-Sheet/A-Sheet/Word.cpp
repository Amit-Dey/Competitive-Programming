/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/59/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   

    string s;
    cin>>s;
    int u=0,l=0;
    for (int i = 0; i < s.size(); ++i){
    	/* code */
    	if(s[i]<97)u++;
    	else l++;
    }
    if(u>l){
    	for (int i = 0; i < s.size(); ++i){
    		/* code */
    		if(s[i]>96){
    			s[i]-=32;
    		}
    	}
    }
    else {
    	for (int i = 0; i < s.size(); ++i){
    		/* code */
    		if(s[i]<96){
    			s[i]+=32;
    		}
    	}
    }
    cout<<s<<endl;
    return 0; 
} 

/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/731/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() { 

    string s;cin>>s;
    int x=0,count=('a'-s[0]);

    if(count<0)count*=-1;
    if(count>13)count=(26-count);

    for (int i = 0; i < s.size()-1; ++i){
    	/* code */
    	x=(s[i+1]-s[i]);
    	if(x<0)x*=-1;
    	if(x>13)x=(26-x);
    	count+=x;
    }
    cout<<count<<endl;
    return 0; 
} 

/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/112/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i < s1.size(); ++i){
    	/* code */
    	if(s1[i]>96)s1[i]-=32;
    }
    for (int i = 0; i < s2.size(); ++i){
    	/* code */
    	if(s2[i]>96)s2[i]-=32;
    }
    // sort(s1.begin(),s1.end());
    // sort(s2.begin(),s2.end());
    
    if(s1<s2)cout<<"-1"<<endl;
    else if(s1>s2)cout<<"1"<<endl;
    else if(s1==s2)cout<<"0"<<endl;    
    
    return 0; 
} 
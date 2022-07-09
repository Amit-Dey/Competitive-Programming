/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/785/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    ll int n,c=0;
    cin>>n;
    string s;
    for (int i = 0; i < n; ++i){
            cin>>s;
            if(s[0]=='T')c+=4;
            else if(s[0]=='C')c+=6;
            else if(s[0]=='O')c+=8;
            else if(s[0]=='D')c+=12;
            else if(s[0]=='I')c+=20;
        }
        cout<<c<<endl;    
    return 0; 
} 

/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/629/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
    
int n,ans,c[101],r[101];
string s;

int main(){
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<n;j++)
            if(s[j]=='C'){
                ans+=c[i]+r[j];
                c[i]++;
                r[j]++;
            }
    }
    cout<<ans;    
    return 0; 
} 
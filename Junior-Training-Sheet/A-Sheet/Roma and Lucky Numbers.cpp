/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/262/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,mx,ans=0,cnt;cin>>n>>mx;
    string s;
    for (int i = 0; i < n; i++){
        cin>>s;
        cnt = 0;
        for (int j = 0; j < s.size(); j++){
            if(s[j]=='4'||s[j]=='7')cnt++;
            if(cnt>mx)break;
        }
        if(cnt<=mx)ans++;
    }
    cout<<ans<<endl;
    
    return 0; 
} 

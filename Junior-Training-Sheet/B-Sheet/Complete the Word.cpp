/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/716/problem/B
*
*/

#include <bits/stdc++.h>
using namespace std;
int main(){	
    string s,S="";cin>>s;map<char,int>m;
    if(s.size()<26){cout<<-1;return 0;}
    int l=0,r=25;
    start:
    while(r<s.size()){
        for(int i=l;i<=r;i++)m[s[i]]++;
        for(char c='A';c<='Z';c++)
            if(m[c]==0){S+=c;}
        if(S.size()>m['?']){l++;r++;m.clear();S="";goto start;}///Failed
        else{
            for(int i=l;i<=r;i++){
                if(s[i]=='?'){s[i]=S[0];S.erase(0,1);}
            }
            for(int i=0;i<s.size();i++)if(s[i]=='?')s[i]='X';
            cout<<s;return 0;
        }
    }
    cout<<-1;
}
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/382/problem/A
*
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){   
    
    string s,r,l,p;
    int x,y,sp;
    cin>>s>>p;
    sp=s.size();
    bool ok=true,tr=true;
    for (int i = 0; i < sp; i++){
        if(s[i]=='|'){
            ok=false;
            continue;
        }
        if(ok)l.push_back(s[i]);
        else r.push_back(s[i]);
    }

    x=l.size()+r.size()+p.size();
    if((l.size()>(r.size()+p.size()))||(r.size()>(l.size()+p.size())))
        tr=false;
    if(x%2==0&&tr){
        y=x/2;
        y-=l.size();
        for (int i = 0; i < y; i++){
            printf("%c",p[i]);
        }
        cout<<l<<"|"<<r;
        for (int i = y; i < p.size(); i++){
            printf("%c",p[i]);
        }
    }
    else printf("Impossible");
    
    return 0; 
} 
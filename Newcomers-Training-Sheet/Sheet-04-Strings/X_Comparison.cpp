/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/X
 * 
**/


#include<bits/stdc++.h>
using namespace std;
#define ll long long

string srt(string s){
    sort(s.begin(),s.end());
    return s;
}

int main(){
    string s;cin>>s;
    ll n=s.size();
    ll l=0,r=n-1;
    string ans=s,x,a,b;
    while (l<r){
        x=srt(s.substr(0,l+1))+srt(s.substr(l+1,n-l+1));
        ans=min(ans,x);
        l++;
    }
    cout<<ans<<endl;
    
    return 0; 
}
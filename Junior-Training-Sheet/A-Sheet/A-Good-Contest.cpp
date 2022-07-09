/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/681/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int t,a,b;cin>>t;
    while(t--){
        cin>>s>>a>>b;
        if(a>=2400&&b>a){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0; 
} 
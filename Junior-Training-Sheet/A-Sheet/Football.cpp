/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/43/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   
    int n;cin>>n;
    string s,x,r;
    cin>>s;
    int l=1,a=1,b=0;
    for (int i = 1; i < n; ++i){
        cin>>x;
        if(s==x)a++;
        else{
            if(l){
                r=x;
                l=0;
            }
            b++;
        }

    }
    if(a>b)cout<<s<<endl;
    else cout<<r<<endl;
    return 0; 
} 
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/483/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){   
    
    ll int l ,r ;
    cin>>l>>r;
    if(l%2!=0)l++;
    if(abs(l-r)<2)cout<<"-1"<<endl;
    else cout<<l<<" "<<l+1<<" "<<l+2<<endl;

    return 0; 
} 

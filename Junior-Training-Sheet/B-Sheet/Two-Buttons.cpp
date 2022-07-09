/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/520/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long int n,m,ans=0;cin>>n>>m;
    while(n<m)
        m%2?m++:m/=2, ans++;
    cout<<ans+n-m<<endl;
    
    return 0; 
} 
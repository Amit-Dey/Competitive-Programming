/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
 * 
**/
#include<bits/stdc++.h>
using namespace std;
int main(){   
    long int i,n,k,m,ans=1000000000;cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>m;ans=min(ans,m);
        if(!(i%k))cout<<ans<<" ",ans=1000000000;
    }
    if(n%k)cout<<ans;
} 
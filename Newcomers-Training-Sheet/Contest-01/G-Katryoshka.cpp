/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){   
    long long int e,m,b,ans;
    cin>>e>>m>>b;
    ans=(min(e,min(m,b)));
    e-=ans,m-=ans,b-=ans,e/=2,ans+=min(e,b);
    cout<<ans;
} 
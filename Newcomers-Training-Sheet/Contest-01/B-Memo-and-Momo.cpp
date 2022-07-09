/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int a,b,k;cin>>a>>b>>k;
    if(!(a%k) && !(b%k))cout<<"Both";
    else if(a%k&&b%k)cout<<"No One";
    else a%k?cout<<"Momo":cout<<"Memo";
    return 0; 
} 
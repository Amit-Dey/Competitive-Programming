/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/546/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int k,n,w;cin>>k>>n>>w;
    k=((((w*(w+1))/2)*k)-n);
    k>0? cout<<k :cout<<"0";
    return 0;
}
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/262/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){   

    int n,k,m=10000,a,b=0;cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<0&&k!=0) {a*=-1;k--;}
        m=min(m,a); b+=a;}
    if(k%2==1) b-=2*m;
    cout<<b;
}
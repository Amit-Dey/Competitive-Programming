/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/445/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,c[51];
    long long ans(1);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        c[i]=i;
    }
    while(m--){
        cin>>a>>b;
        while(c[a]!=a||b!=c[b]){
            a=c[a];
            b=c[b];
        }
        if(a != b) ans *= 2;
        c[b] = a;
    }
    cout<<ans<<endl;
}

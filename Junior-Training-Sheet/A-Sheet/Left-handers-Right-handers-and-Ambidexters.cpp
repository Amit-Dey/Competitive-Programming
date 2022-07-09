/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/950/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int l,r,a,ans=0,x;
    cin>>l>>r>>a;
    x=min(l,r),ans=(x*2);
    x=min(a,max(l,r)-x),ans+=(x*2);
    a-=x;
    ans+=(a-a%2);
    cout<<ans<<endl;

    return 0;
}

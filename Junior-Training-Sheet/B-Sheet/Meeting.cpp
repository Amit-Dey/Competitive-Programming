/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/144/problem/B
*
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int x[1000],y[1000],r[1000],a,b,c,d,n,k,ans=0;
    cin>>a>>b>>c>>d>>n;
    for(int i=0;i<n;++i)
        cin>>x[i]>>y[i]>>r[i];

    for (int i=min(a,c);i<=max(a,c);i++){
        for (int j=min(b,d);j<=max(b,d);j++){
            if(i==a||i==c||j==b||j==d){
                for(k=n;k--;)
                    if((i-x[k])*(i-x[k])+(j-y[k])*(j-y[k])<=r[k]*r[k])
                        break;
                ans+=k<0;
            }
        }
    }
    cout<<ans<<endl;
}
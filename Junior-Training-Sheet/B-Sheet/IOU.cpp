/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/376/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int arr[102];
int main(){
    ll int n,m,a,b,c,sum=0;cin>>n>>m;
    while(m--){
        cin>>a>>b>>c;
        arr[a]+=c;
        arr[b]-=c;
    }
    for(int i = 0; i < 101; ++i)
        if(arr[i]<0)
            sum+=abs(arr[i]);
    cout<<sum<<endl;
    return 0;
}
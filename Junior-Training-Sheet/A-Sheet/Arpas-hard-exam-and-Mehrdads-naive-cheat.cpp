/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/742/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll power(ll b,ll p,ll md){
   ll res=1;
   while(p){
       if(p%2)res=(res*b)%md,p--;
       else b=(b*b)%md,p/=2;
   }
   return res;
}

int main(){

    ll n;cin>>n;
    cout<<power(8,n,10)<<endl;
    
    return 0; 
}


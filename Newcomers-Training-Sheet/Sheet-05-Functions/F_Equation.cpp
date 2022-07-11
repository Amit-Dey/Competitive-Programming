/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
 *
 **/

#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll solve(ll a,ll b){
    ll sum=0,x;
    for (ll i = 2; i <=b; i+=2){
        x=1;
        for (ll j = 0; j < i; j++){
            x*=a;
        }
        sum+=x;
    }
    return sum;
}


int main(){

    ll a,b;cin>>a>>b;
    cout<<solve(a,b);
    
    return 0; 
}
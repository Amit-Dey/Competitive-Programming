/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/584/problem/B
*
*/

#include<iostream>
using namespace std;

int main(){
    long long int n,x=1,y=1,mod=1e9+7;
    cin>>n;
    for(int i=0;i<n;i++){
        (x*=27)%=mod;
        (y*=7)%=mod;
    }
    cout<<(x-y+mod)%mod;
}
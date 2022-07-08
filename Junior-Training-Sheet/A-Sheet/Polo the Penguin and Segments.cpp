/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/289/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n,k,a,b,sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        sum+=(b-a+1);
    }
    cout<<(k-(sum % k))%k<<endl;
    return 0; 
} 
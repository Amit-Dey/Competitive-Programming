/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
 * 
**/

#include<bits/stdc++.h>
using namespace std;
main(){
    unsigned long long int n,x,a=0,b=0;cin>>n;
    for(int i=0;i<n;i++,a=0){
        cin>>x;while(x%2==0)a++,x/=2;b=max(b,a);
    }cout<<b;
} 
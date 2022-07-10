/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,o,e,x;cin>>t;
    while(t--){
        o=0,e=0,cin>>n;
        for(int i=0;i<n;i++)cin>>x,(x%2)?o++:e++;
        (n%2)?cout<<"-1"<<endl:cout<<abs(o-e)/2<<endl;}
} 
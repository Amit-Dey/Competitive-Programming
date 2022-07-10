/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZ  m/contest/329103/problem/B
 * 
**/

#include<bits/stdc++.h>
using namespace std;
main(){   
    int n,x;cin>>n;vector<int>v;
    while(n--){cin>>x;
        if(x==0)reverse(v.begin(),v.end());v.push_back(x);}
    for(int i:v)cout<<i<<' ';
} 
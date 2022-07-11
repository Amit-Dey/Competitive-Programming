/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;vector<int>v(n);
    for(int &i:v)cin>>i;
    sort(v.begin(),v.end());
    auto ip=unique(v.begin(),v.end());
    cout<<ip-v.begin();
} 
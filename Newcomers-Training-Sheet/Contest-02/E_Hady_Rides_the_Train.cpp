/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){   
    long long int n,x;cin>>n;x=n/4;
    cout<<x<<" ";(x%2)?cout<<3-(n%4):cout<<n%4;
} 
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){    
    int n;cin>>n;int a[n],b[n];
    for(int &i:a)cin>>i;
    for(int &i:b)cin>>i;
    for(int i:b)cout<<i<<' ';
    for(int i:a)cout<<i<<' ';
} 
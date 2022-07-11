/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0,x;cin>>n;
    for(int i=0;i<n;i++){cin>>x;
        if(x)cout<<x<<' ';else c++;}
    for(int i=0;i<c;i++)cout<<'0'<<' ';
} 
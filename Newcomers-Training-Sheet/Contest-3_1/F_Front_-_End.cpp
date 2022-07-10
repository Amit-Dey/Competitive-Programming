/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int a[n];
    for(int &i:a)cin>>i;
    for (int i=0,j=n-1;i<=j;i++,j--){
        cout<<a[i]<<' ';if(i<j)cout<<a[j]<<' ';}
} 
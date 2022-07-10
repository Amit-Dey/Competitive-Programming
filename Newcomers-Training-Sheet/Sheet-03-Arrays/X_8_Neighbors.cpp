/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){   

    ll int n,m,x,y;
    char c;
    cin>>n>>m;
    vector<vector<ll int>> v(n,vector<ll int>(m,0));
    for (ll int i = 0; i < n; ++i){
        for (ll int j = 0; j < m; ++j){
            cin>>c;
            if(c=='.')v[i][j]=1;
        }
        
    }
    cin>>x>>y;
    int sum=0,rs,re,cs,ce;
    if(x==1){
        rs=0;
        re=1;
    }
    else if(x==n){
        rs=x-2;
        re=x-1;
    }
    else{
        rs=x-2;
        re=x;
    }
    if(y==1){
        cs=0;
        ce=1;
    }
    else if(y==m){
        rs=y-2;
        re=y-1;
    }
    else{
        cs=y-2;
        ce=y;
    }
    for (ll int i = rs; i <=re; ++i){
        for (ll int j = cs; j <=ce; ++j){
            sum+=v[i][j];
        }
    }
    if(sum==v[x-1][y-1])cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0; 
} 
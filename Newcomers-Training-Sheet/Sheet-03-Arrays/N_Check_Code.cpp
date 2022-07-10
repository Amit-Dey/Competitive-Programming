/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    int a,b;cin>>a>>b;
    int n=a+b+1;
    string arr;cin>>arr;
    int yes=1,c=0;
    if(arr[a]!='-')yes=0;
    for (int i = 0; i < n; ++i){
        if(arr[i]<'0'||arr[i]>'9')c++;
    }
    if(c==1&&yes==1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0; 
} 
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/1/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    ll int n,m,a,b,x;
    cin>>n>>m>>x;
    a=(n/x);
    b=(m/x);
    if(n%x)a++;
    if(m%x)b++;
    cout<<a*b<<endl;    
    return 0; 
} 

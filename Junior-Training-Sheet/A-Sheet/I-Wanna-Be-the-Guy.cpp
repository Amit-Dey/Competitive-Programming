/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/469/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){   
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        arr[i]=0;
    }
   	int p,x;cin>>p;
    for (int i = 0; i < p; ++i){
        cin>>x;
        arr[x-1]=1;
    }
    int q,y;
    cin>>q;
    for (int i = 0; i < q; ++i){
        cin>>y;
        arr[y-1]=1;
    }
    ll int sum=0;
    for (int i = 0; i < n; ++i){
        sum+=arr[i];
    }
    if(sum==n)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

    return 0; 
} 

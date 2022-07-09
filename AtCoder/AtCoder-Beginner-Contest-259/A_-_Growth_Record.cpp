#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){

    ll n,m,x,t,d;
    cin>>n>>m>>x>>t>>d;
    vector<ll>arr(205,0);
    arr[n]=t;
    for (ll i = n-1; i >=0; i--){
        if(i<x){
            arr[i]=arr[i+1]-d;
        }
        else arr[i]=t;
    }
    cout<<arr[m]<<endl;
    
    return 0; 
}
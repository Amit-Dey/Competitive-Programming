/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/160/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    int n;cin>>n;
    int arr[n];
    ll int s=0;
    for (int i = 0; i < n; ++i){
        cin>>arr[i];
        s+=arr[i];
    }
    s=ceill(s/2);
    sort(arr,arr+n);
    ll int ans=0,c=0;
    for (int i =n-1; i >=0; --i){
        ans+=arr[i];
        c++;
        if(ans>s)break;
    }
    cout<<c<<endl;
   
    return 0; 
} 


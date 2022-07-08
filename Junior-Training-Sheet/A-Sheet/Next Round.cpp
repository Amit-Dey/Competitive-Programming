/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/158/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){   
    
    int n,k,x,ans=0;
    cin>>n>>k;
    int arr[n+1];
    for (int i = 1; i <=n; i++){
        cin>>arr[i];
    }
    x=arr[k];
    for (int i = 1; i <=n; i++){
        if (arr[i]>=x&&arr[i]>0){
            ans++;
        }
        
    }
    cout<<ans;
    
    return 0; 
} 
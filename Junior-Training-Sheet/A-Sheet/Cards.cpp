/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/701/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    vector<bool>vis(n,0);
    long long sum=0;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int avr=(sum/(n/2));
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i]+arr[j]==avr&& !vis[i]&& !vis[j]){cout<<i+1<<' '<<j+1<<endl;vis[i]=1,vis[j]=1;break;}
        }
    }
    
    return 0; 
} 
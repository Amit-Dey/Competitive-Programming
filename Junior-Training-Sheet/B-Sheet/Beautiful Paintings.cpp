/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/651/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
int arr[1010];
int main(){
    int n;cin>>n;
    int x;
    for (int i = 0; i < n; i++){
        cin>>x;arr[x]++;
    }
    vector<int>v;
    long long sum=0,ans=0;
    for (int i = 0; i < 1010; i++){
        if(arr[i])v.push_back(arr[i]),sum+=arr[i];
    }
    int sz=v.size();
    while (sum>0){   
        sum=0;
        int cnt=-1;
        for (int i = 0; i < sz; i++){
            if(v[i])v[i]--,cnt++;
            sum+=v[i];
        }
        ans+=cnt;
    }
    cout<<ans<<endl;

    return 0; 
} 
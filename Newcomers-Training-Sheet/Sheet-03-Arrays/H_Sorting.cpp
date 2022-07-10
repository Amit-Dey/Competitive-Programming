/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){   

    int n;cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i){
        cin>>arr[i];
    }
    int min_idx;
    for (int i = 0; i < n-1; ++i){
        min_idx=i;
        for (int j=i+1; j < n; ++j){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[min_idx],arr[i]);

    }
    for (int i = 0; i < n; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    return 0; 
} 
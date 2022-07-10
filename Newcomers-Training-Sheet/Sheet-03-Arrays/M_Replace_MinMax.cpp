/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin>>arr[i];
    }
    int min_idx=0;
    int max_idx=0;
    for (int i = 0; i < n; ++i){
        if(arr[min_idx]>arr[i]){
            min_idx=i;
        }
        if(arr[max_idx]<arr[i]){
            max_idx=i;
        }
    }
    swap(arr[min_idx],arr[max_idx]);
    for (int i = 0; i < n; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    return 0; 
} 
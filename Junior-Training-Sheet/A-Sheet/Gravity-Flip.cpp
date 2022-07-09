/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/405/problem/A
*
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        /* code */
        cin>>arr[i];
    }
   sort(arr, arr + n);
    for (int i = 0; i < n; ++i){
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0; 
} 
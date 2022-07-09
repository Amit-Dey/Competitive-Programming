/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/294/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){   
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        /* code */
        cin>>arr[i];
    }
    int b;cin>>b;
    int ith,bnum;
    for (int i = 0; i < b; ++i){
        /* code */
        cin>>ith>>bnum;
        ith--;
        arr[ith-1]+=(bnum-1);
        arr[ith+1]+=(arr[ith]-bnum);
        arr[ith]=0;
    }
    for (int i = 0; i < n; ++i){
        /* code */
        cout<<arr[i]<<endl;
    }

    return 0; 
} 
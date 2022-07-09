/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/807/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){   
    int n;cin>>n;
    int a[n],b[n];
    for (int i = 0; i < n; ++i){
        cin>>a[i]>>b[i];
        if(a[i]!=b[i]){
            cout<<"rated"<<endl;
            return 0;
        }
    }
    for (int i = 1; i < n; ++i){
        if(a[i]>a[i-1]){
            cout<<"unrated"<<endl;
            return 0;
        }
    }
    cout<<"maybe"<<endl;

    return 0; 
} 

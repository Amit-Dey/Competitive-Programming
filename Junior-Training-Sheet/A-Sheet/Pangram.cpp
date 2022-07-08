/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/520/problem/A
*
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[26];
int main() {   
    int n;cin>>n;
    char c;
    for (int i = 0; i < n; ++i){
        /* code */
        cin>>c;
        if(c<'a')arr[c-65]=1;
        else arr[c-97]=1;
    }
    int x=0;
    for (int i = 0; i < 26; ++i){
        /* code */
        x+=arr[i];
    }
    if(x==26)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
    return 0; 
} 

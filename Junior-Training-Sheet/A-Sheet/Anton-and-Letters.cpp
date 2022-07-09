/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/443/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[26];
int main() {   
    char a;cin>>a;
    for (int i = 0; a!='}'; ++i){
        /* code */
        cin>>a;
        if(a!=',')arr[a-97]=1;
    }
    int x=0;
    for (int i = 0; i < 26; ++i){
        /* code */
        x+=arr[i];
    }
    cout<<x<<endl;
    return 0; 
} 
 
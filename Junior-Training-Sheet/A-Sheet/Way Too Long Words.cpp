/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/71/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[26];
int main() {   
   int n;cin>>n;
   while(n--){
    string s;
    cin>>s;
    if(s.size()>10){
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
    }
    else cout<<s<<endl;
   }
    return 0; 
} 

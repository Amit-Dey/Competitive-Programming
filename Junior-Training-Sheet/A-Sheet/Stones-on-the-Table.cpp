/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/266/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   
   
   int n;cin>>n;
   string s;cin>>s;
   int c=0;
   for (int i = 1; i < n; ++i){
   	/* code */
   	if(s[i-1]==s[i])c++;
   }
   cout<<c<<endl;
    return 0; 
} 
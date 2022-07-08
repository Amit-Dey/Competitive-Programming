/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/61/problem/A
*
*/

#include <bits/stdc++.h>
using namespace std;

int main(){  
  
 string a,b;
 cin>>a>>b;
 int sz=a.size();
 for(int i=0;i<sz;i++){
   if(a[i]==b[i])cout<<"0";
   else cout<<"1";
 }
   
  return 0;
}
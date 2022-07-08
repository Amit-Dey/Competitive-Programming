/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/454/problem/A
*
*/

#include <bits/stdc++.h>
using namespace std;

int main(){  
  
 int n;cin>>n;
 int x=(n/2)+1;
 int l=x,r=x;
 for(int i=1;i<=x;i++){
   for(int j=1;j<=n;j++){
     if(j<l||j>r)cout<<'*';
     else cout<<'D';
   }
   cout<<endl;
   l--,r++;
  }
  l++,r--;
  for(int i=1;i<x;i++){
    l++,r--;
   for(int j=1;j<=n;j++){
     if(j<l||j>r)cout<<'*';
     else cout<<'D';
   }
   cout<<endl;
  }
   
  return 0;
}
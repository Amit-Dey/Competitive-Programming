/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/686/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[26];

int main() {   
   int n;
   char sine;
   ll int x,a,c=0;

   cin>>n;cin>>x;
   while(n--){
         cin>>sine;
         cin>>a;
         if(sine=='+'){
            x+=a;
         }
         else{
            if(x>=a)x-=a;
            else
                c++;
         }
   }
   cout<<x<<" "<<c<<endl;
    return 0; 
} 
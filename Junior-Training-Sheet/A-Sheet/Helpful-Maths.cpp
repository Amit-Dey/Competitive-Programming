/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/339/problem/A
*
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   
    
   string s;cin>>s;
   int l=(s.size())/2;
   l++;
   int arr[l];
   for (int i = 0,j=0; i < l;j++){
       /* code */
        if(s[j]!='+'){
            arr[i]=s[j]-48;
            i++;
        }
   }
   sort(arr,arr+l);
   cout<<arr[0];
   for (int i = 1; i < l; ++i){
       /* code */
    cout<<"+"<<arr[i];
 
   }
   cout<<endl;
    return 0; 
} 
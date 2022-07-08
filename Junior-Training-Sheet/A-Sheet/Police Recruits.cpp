/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/427/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   

    int n;cin>>n;
    int arr[n];
    int c=0;
    for (int i = 0; i < n; ++i){
    	/* code */
    	cin>>arr[i];
    }
    int police=0,crime=0;
   	for (int i = 0; i < n; ++i){
   		/* code */
   		if (arr[i]!=-1){
   			/* code */
   			c+=crime;
   			crime=0;
   			police+=arr[i];

   		}
   		else{
   			crime++;
   			if(police){
   				crime--;
   				police--;
   			}
   		}
   	}
   	if(crime)c+=crime;
   	cout<<c<<endl;
    return 0; 
} 
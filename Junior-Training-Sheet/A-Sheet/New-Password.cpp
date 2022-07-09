/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/770/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){   
   	
   	int n,k;cin>>n>>k;
   	char arr[n];
   	int c=97;
   	for (int i = 0; i < n; ++i){
   		/* code */
   		if(c==(97+k))c=97;
   		arr[i]=c;
   		c++;
   	}
   	for (int i = 0; i < n; ++i){
   		/* code */
   		cout<<arr[i];
   	}
    return 0; 
} 
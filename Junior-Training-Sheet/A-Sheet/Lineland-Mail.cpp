/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/567/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
   ll int n;
   cin>>n;
   ll arr[n];
   for (int i = 0; i < n; ++i){
   		cin>>arr[i];
   }

   if(arr[0]<0){
   	ll int x=arr[0]*-1;
   	for (int i = 0; i < n; ++i){
   		arr[i]+=x;
   	}
   }
   	ll int a,b,max,min;
	for (int i = 0; i < n; ++i){	
		if(i==0){
			max=(arr[n-1]-arr[0]);
			min=(arr[i+1]-arr[i]);
		}
		else if(i==(n-1)){
			max=(arr[n-1]-arr[0]);
			min=(arr[i]-arr[i-1]);
		}
		else{
			max=(arr[n-1]-arr[i]);
		if(max<(arr[i]-arr[0]))max=(arr[i]-arr[0]);
		min=(arr[i+1]-arr[i]);
		if(min>(arr[i]-arr[i-1]))min=(arr[i]-arr[i-1]);
		}
		cout<<min<<" "<<max<<endl;
	}	
    return 0; 
} 
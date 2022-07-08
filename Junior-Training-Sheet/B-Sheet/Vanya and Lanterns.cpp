/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/492/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,mx=0;cin>>n>>m;
	long long arr[n];
	for (long long i = 0; i < n; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for (long long i = 1; i < n; i++){
		mx=max(mx,abs(arr[i]-arr[i-1]));
	}
	printf("%.12f",max(mx/2.0,max(arr[0]*1.0-0,1.0*m-arr[n-1])));
	return 0; 
} 
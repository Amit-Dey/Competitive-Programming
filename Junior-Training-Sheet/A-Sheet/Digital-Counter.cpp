/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/495/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
	
	int arr[]={2,7,2,3,3,4,2,5,1,2};
	int n;
	cin>>n;
	int ans=arr[n%10];
	n/=10;
	ans*=arr[n];
	cout<<ans<<endl;
	return 0;
}
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/768/problem/A
*
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   

    ll int n;
    cin>>n;
    ll int arr[n];
    for (int i = 0; i < n; ++i){
    	/* code */
    	cin>>arr[i];
    }

    if(n<=2)cout<<"0"<<endl;
    else{
    	sort(arr,arr+n);
    	int c=0;
    	for (int i = 1; i < n-1; ++i){
    		/* code */
    		if((arr[0]<arr[i])&&(arr[n-1]>arr[i]))c++;
    	}
    	cout<<c<<endl;
    }
    return 0; 
} 
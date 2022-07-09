/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/228/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   

    ll int arr[4];
    for (int i = 0; i < 4; ++i){
    	/* code */
    	cin>>arr[i];
    } 	
    int c=0;
    sort(arr,arr+4);
    for (int i = 0; i < 3; ++i){
    	/* code */
    	if(arr[i]==arr[i+1])c++;
    }
    cout<<c<<endl;
     
    return 0; 
} 
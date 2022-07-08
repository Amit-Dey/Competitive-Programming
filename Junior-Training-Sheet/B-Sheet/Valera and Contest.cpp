/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/369/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k,l,r,sa,sk;
	cin>>n>>k>>l>>r>>sa>>sk;
	long long arr[n],rem=(sk%k);
	for (int i = 0; i < k; i++){
		arr[i]=sk/k+(rem>0);
		rem--;
	}
	if(n!=k){
		sa-=sk;
		rem=sa%(n-k);
		for (int i = k; i < n; i++){
			arr[i]=sa/(n-k)+(rem>0);
			rem--;
		}
	}
	for (int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}
	
	return 0; 
} 
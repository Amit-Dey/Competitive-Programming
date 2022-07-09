/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/544/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;cin>>n>>x;
	if(x>ceil((n*n)/2.0))return cout<<"NO"<<endl,0;
	cout<<"YES"<<endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if((i+j)%2==0&&x>0){
				cout<<'L';x--;
			}
			else cout<<'S';
		}cout<<'\n';
	}
	return 0; 
} 
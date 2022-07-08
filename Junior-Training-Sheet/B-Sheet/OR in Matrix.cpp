/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/486/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
int n,m,arr[103][103],arr2[103][103];
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr2[i][j];
			if(arr2[i][j]==0){
				for(int k=0;k<n;k++)arr[k][j]=1;
				for(int k=0;k<m;k++)arr[i][k]=1;
			}
			if(arr[i][j]!=1)arr[i][j]=2;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			bool ok=false;
			for(int k=0;k<n;k++)if(arr[k][j]==2)ok=true;
			for(int k=0;k<m;k++)if(arr[i][k]==2)ok=true;
			if(ok!=arr2[i][j]){
                cout<<"NO"<<endl;
                return 0;
            }
		}
	}
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){cout<<arr[i][j]-1<<" ";}
		cout<<endl;
	}
}
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/141/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,x,y;cin>>a>>x>>y;
	int h=y/a;
	if(y%a==0)return cout<<"-1",0; //square er vitor e hote bobe
	else if(h%2==0&&h){
		if(x%a==0||x>a||x<-a)return cout<<"-1",0;
		if(x>0)cout<<h+h/2+1;
		else cout<<h+h/2;
	}
	else {
		if (x>=(a+1)/2||x<=-(a+1)/2)return cout<<"-1", 0;
		cout<<(h==0?1:h+(h+1)/2);
	}
	return 0; 
} 

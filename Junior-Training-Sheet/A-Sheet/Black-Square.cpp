/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/431/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   
    int arr[5];
    for (int i = 1; i < 5; ++i){
    	/* code */
    	cin>>arr[i];
    }
    string s;cin>>s;
    int time=0;
    for (int i = 0; i < s.size(); ++i){
        	/* code */
        	time+=arr[s[i]-48];
        }
      cout<<time<<endl;    
    return 0; 
} 
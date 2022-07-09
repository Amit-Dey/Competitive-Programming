/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/236/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[27];
int main() {   

    string s;
    cin>>s;
    for (int i = 0; i < s.size(); ++i){
    	/* code */
    	arr[s[i]-97]=1;
    }
    int x=0;
    for (int i = 0; i < 27; ++i){
    	/* code */
    	x+=arr[i];
    }
    if(x%2!=0)cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0; 
} 
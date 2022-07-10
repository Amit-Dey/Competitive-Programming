/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    ll int n;cin>>n;
    vector<ll int> alpha(26,0);
    char x;
    for (int i = 0; i < n; ++i){
    	cin>>x;
    	alpha[x-97]++;
    }
    for (int i = 0; i < 26; ++i){
    	for (int j = 0; j < alpha[i]; ++j){
    		cout<<(char)(i+97);
    	}
    }
    return 0; 
} 
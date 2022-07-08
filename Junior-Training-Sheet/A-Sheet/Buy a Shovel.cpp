/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/732/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   
     
    int k,r;
    cin>>k>>r;
    int i;
    for (i = 1; ; ++i){
    	/* code */
    	if((i*k)%10==r||(i*k)%10==0)break;
    }
    cout<<i<<endl;
    return 0; 
} 
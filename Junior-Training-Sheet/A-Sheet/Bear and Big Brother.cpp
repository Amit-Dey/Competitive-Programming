/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/791/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {	
    int l,b,y=0;
    cin>>l>>b;
    while(1){
        l*=3;
        b*=2;
        y++;
        if(l>b)break;
    }
    cout<<y<<endl;
	
    return 0; 
} 
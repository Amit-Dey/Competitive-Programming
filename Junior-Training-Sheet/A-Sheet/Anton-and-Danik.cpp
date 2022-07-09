/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/734/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {	

    ll int t,a=0,d=0;
    cin>>t;
    for (int i = 0; i < t; ++i){
        /* code */
        char x;
        cin>>x;
        if(x=='D')d++;
        else if(x=='A')a++;
    }
    if(a>d)cout<<"Anton"<<endl;
    else if(a<d)cout<<"Danik"<<endl;
    else if(a==d)cout<<"Friendship"<<endl;
	
    return 0; 
} 
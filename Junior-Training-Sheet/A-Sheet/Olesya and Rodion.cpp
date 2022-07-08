/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/584/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    ll int n,t;
    cin>>n>>t;
    if(t==10&&n>1){
        cout<<1;
        n--;
        while(n--){
            cout<<0;
        }
    }
    else if(n<=1&&t==10){
        cout<<-1;
    }
    else{
        while(n--){
        cout<<t;
        }
    }
    cout<<endl;
    return 0; 
} 
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
    ll int n,past=0,present=1,fib=1;
    cin>>n;
    if(n==1){
        fib=0;
    }
    else if(n==2){
           fib=1;
    }
    else{
        for (ll int i =2; i<n; ++i){
            fib=past+present;
            past=present;
            present=fib;
        }
    }
    cout<<fib<<endl;
    return 0; 
} 
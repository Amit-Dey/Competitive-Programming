/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/486/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {   
    ll int n;
    cin>>n;
    if(n%2==0){
        cout<<(n/2)<<endl;
    }
    else{
        cout<<(n/2+1)*-1<<endl;
    }
    
    return 0; 
} 

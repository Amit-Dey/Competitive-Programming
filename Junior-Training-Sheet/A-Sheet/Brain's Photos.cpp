/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/707/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    int n,m;
    cin>>n>>m;
    char x;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin>>x;
            if(x=='C'||x=='M'||x=='Y'){
                cout<<"#Color"<<endl;
                return 0;
            }
        }
    }
    cout<<"#Black&White"<<endl;

    return 0; 
} 

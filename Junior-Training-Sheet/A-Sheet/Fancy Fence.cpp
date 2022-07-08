/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/270/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    int t;cin>>t;
    while(t--){
        int l=0;
        double a;
        cin>>a;
        for (int i = 3;i<100000; ++i){
            if((double)(180*(i-2))/(double)i==a){
                cout<<"YES"<<endl;
                l=1;
                break;
            }
        }
        if(!l)cout<<"NO"<<endl;
    }

    return 0; 
} 
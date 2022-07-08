/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/709/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   

    ll int n,b,d;
    cin>>n>>b>>d;
    ll int input,sum=0,c=0;
    for (int i = 0; i < n; ++i){
        /* code */
        cin>>input;
        if (input>b){
            /* code */
           continue;
        }
        else {
            sum+=input;
            if (sum>d){
                /* code */
                c++;
                sum=0;
            }
        }
    }
    cout<<c<<endl;
    return 0; 
} 
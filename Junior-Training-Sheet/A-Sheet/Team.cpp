/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/231/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   
    int n,x,c=0;
    cin>>n;
    for (int i = 0; i < n; ++i){
        /* code */
        int a=0;
        for (int j = 0; j < 3; ++j){
            /* code */
            cin>>x;
            a+=x;
        }
        if(a>=2)c++;
    }
    cout<<c<<endl;
    
    return 0; 
} 
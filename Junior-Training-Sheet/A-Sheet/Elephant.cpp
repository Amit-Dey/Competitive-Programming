/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/617/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){   
        
    int x;
    cin>>x;
    int ans=x/5;
    if(x%5!=0)ans++;
    cout<<ans<<endl;
    return 0; 
} 
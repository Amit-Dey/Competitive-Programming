/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/47/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

int main() {   
    int x;cin>>x;
    double n=((sqrt(8*x+1)-1)/2);
    if((n-(int)n)==0)cout<<"YES";
    else cout<<"NO";
    
    return 0;
}

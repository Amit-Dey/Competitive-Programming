/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/467/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int n,p,q,c=0;cin>>n;
    while(n--){
        cin>>p>>q;
        if(p+2<=q)c++;
    }
    cout<<c;        
    return 0;
}

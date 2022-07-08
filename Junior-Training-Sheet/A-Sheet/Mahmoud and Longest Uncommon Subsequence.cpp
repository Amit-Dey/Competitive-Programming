/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/766/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   

    string a,b;
    cin>>a>>b;
    int as=a.size(),bs=b.size();
    if(a==b)cout<<"-1"<<endl;
    else if(as>bs)cout<<as<<endl;
    else cout<<bs<<endl;

    return 0; 
} 
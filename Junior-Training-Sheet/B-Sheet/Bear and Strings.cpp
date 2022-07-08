/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/385/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int c=0,k=0;
    string s;cin>>s;
    for(int i=0;i<(int)s.size()-3;i++)
    {
        if(s.substr(i,4)=="bear")k=i+1;
        c+=k;
    }
    cout<<c<<endl;
}
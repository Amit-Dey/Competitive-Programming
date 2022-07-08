/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/265/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   

    string s,r;
    cin>>s>>r;
    int c=0,l=r.size();
    for (int i = 0; i <l; ++i){
            /* code */
            if(s[c]==r[i]){
                c+=1;
            }
        }
        c++;
        cout<<c<<endl;   

    return 0; 
} 
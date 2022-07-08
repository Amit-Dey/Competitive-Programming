/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/208/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    string s;cin>>s;
    int l=s.size();
    for (int i = 0; i < l; ++i){
        if (s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i+=2;
        }
        else {
            cout<<s[i];
            if (s[i+1]=='W'&&s[i+2]=='U'&&s[i+3]=='B'){
                cout<<" ";
            }
        }
    }

    return 0; 
} 

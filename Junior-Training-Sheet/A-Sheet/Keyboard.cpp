/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/474/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    string r="qwertyuiopasdfghjkl;zxcvbnm,./";
    char direction;
    cin>>direction;
    string s;
    cin>>s;
    int p=r.size(),l=s.size();
    for (int i = 0; i < l; ++i){
        for (int j = 0; j < p; ++j){
            if(s[i]==r[j]){
                if(direction=='R')s[i]=r[j-1];
                else s[i]=r[j+1];
                break;
            }
        }
    }
    cout<<s<<endl;

    return 0; 
} 


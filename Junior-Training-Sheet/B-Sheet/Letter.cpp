/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/43/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main(){
    string s,r;
    getline(cin,s);
    getline(cin,r);
    for (int i = 0; i < s.size(); i++){   
        if(s[i]!=' ')arr[s[i]]++;
    }
    bool ok=true;
    for (int i = 0; i < r.size(); i++){
        if(r[i]!=' '&&arr[r[i]]<=0){cout<<"NO"<<endl;ok=false;break;}
        else arr[r[i]]--;
    }
    if(ok)cout<<"YES"<<endl;
    
    return 0; 
} 
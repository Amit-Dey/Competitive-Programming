/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/448/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;cin>>s>>t;
    map<char,int>c,v;
    for(char i:s)c[i]++;
    for(char i:t)v[i]++;
    if(c==v){cout<<"array";return 0;}
    for(char i:t)if(v[i]>c[i]){cout<<"need tree";return 0;}
    for(int n=s.size()-1,m=t.size()-1;n>=0&&m>=0;){
        if(s[n]==t[m])n--,m--;
        else n--;
        if(m==-1){ cout<<"automaton";return 0;
        }
    }
    cout<<"both"<<endl;
    return 0;
}
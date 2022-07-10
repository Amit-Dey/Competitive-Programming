/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
 * 
**/

#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]=='\\')break;
        cout << s[i] ;
    }

    return 0;
}
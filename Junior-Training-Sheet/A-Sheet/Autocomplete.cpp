/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/53/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p;cin>>s;
    int n;cin>>n;

    vector<string>str(n);
    for (int i = 0; i < n; i++)cin>>str[i];
    sort(str.begin(),str.end());
    for (int i = 0; i < n; i++)p+=str[i]+' ';

    size_t found = p.find(s);
    if (found != string::npos){
        while (p[found]!=' '){
            cout<<p[found++];
        }
        cout<<endl;
    }else cout<<s<<endl;
    
    return 0; 
} 

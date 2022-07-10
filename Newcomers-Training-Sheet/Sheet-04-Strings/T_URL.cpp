/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){   
    vector<string>info(6);
    int idx=0;char c;bool ok=false;
    while (cin>>c){   
        if(c=='&')ok=false,idx++;
        if(ok)info[idx]+=c;
        if(c=='=')ok=true;}
    cout<<"username: "<<info[0]<<endl;
    cout<<"pwd: "<<info[1]<<endl;
    cout<<"profile: "<<info[2]<<endl;
    cout<<"role: "<<info[3]<<endl;
    cout<<"key: "<<info[4]<<endl;
} 
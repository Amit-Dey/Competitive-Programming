/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/255/problem/A
*
*/
#include<bits/stdc++.h>
using namespace std;

int main(){       
    
    int n;cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    int ch=0,bi=0,ba=0;

    for(int i=1;i<=n;i++){
        if(i%3==1)ch+=v[i-1];
        else if(i%3==0)ba+=v[i-1];
        else bi+=v[i-1];
    }
    if(ch>bi&&ch>ba)
        cout<<"chest"<<endl;
    else if(bi>ch&&bi>ba)
        cout<<"biceps"<<endl;
    else cout<<"back"<<endl;

    // cout<<ch<<" "<<bi<<" "<<ba;
    return 0; 
} 
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/451/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;cin>>n;
    vector<int>v(n);
    for(auto &i:v)cin>>i;

    int c=0,l=0,r=0;
    vector<int> cp=v;
    sort(cp.begin(),cp.end());
    for(int i=0;i<n;i++){
        if (cp[i]!=v[i]){
            l=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if (cp[i]!=v[i]){
            r=i;
            break;
        }
    }
    reverse(v.begin()+l,v.begin()+r+1);
    for(int i=0;i<n;i++){
        if (cp[i]!=v[i]){
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    cout<<++l<<" "<<++r<<endl;
    return 0; 
} 
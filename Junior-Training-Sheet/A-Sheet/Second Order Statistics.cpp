/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/22/problem/A
*
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
    int n;cin>>n;
    std::vector<int> v(n);
    for(int &i:v)cin>>i;
    sort(v.begin(), v.end());
    for (int i = 1; i < n; ++i){
        if(v[i]!=v[0]){
            cout<<v[i]<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
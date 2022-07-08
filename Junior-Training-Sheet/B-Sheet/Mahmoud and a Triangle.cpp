/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/766/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int &i:v)cin>>i;
    sort(v.begin(),v.end());
    for(int i=n-1;i>1;i--){
        for (int j=0;j<i-1;j++){
            if (v[j]+v[j+1]>v[i]){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0; 
} 
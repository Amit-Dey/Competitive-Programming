/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   

    int n,f,z,l,r,m,c;
    cin>>n>>f;
    vector<int> v;
    for (int i = 0; i < n; ++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    while(f--){
        l=0,r=n-1,c=0;
        cin>>z;
        while(l<=r){
            m=(l+(r-l)/2);
                if(v[m]==z){
                    c=1;
                    break;
                }
            if(v[m]<z)l=m+1;
            else r=m-1;
        }
        if (c==1)cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }

    return 0; 
} 
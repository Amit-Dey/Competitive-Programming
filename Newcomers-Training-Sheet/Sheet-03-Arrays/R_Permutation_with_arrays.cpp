/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    int a;cin>>a;
    std::vector<int> c(a);
    std::vector<int> b(a);
    for(int i=0;i<a;i++)
        cin>>b[i];
    
    for(int j=0;j<a;j++){
        cin>>c[j];
    }
    sort(c.begin(),c.end());
    sort(b.begin(),b.end());
    bool test_case=true;
    for(int i=0;i<a;i++){
        if(b[i]!=c[i]){
            cout<<"no\n";
            return 0;
        }
    }
    cout<<"yes\n";
    
    return 0; 
} 
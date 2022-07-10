/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t,l,r,a;cin>>t;while(t--){
        cin>>l>>r;
        if(r<l)swap(l,r);l--;
        cout<<(((r*(r+1))/2)-((l*(l+1))/2))<<endl;
    }
} 
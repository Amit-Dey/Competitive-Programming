/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
 * 
**/

#include<bits/stdc++.h>
using namespace std;
main(){
    int n;cin>>n;
    for(int i=1,k=n;i<=n;i++,k--){
        for(int j=1;j<=n;j++){
            (i==k&&i==j)?cout<<'X':(j==i)?cout<<"\\":(j==k)?cout<<"/":cout<<"*";
        }
        cout<<endl;
    }
}
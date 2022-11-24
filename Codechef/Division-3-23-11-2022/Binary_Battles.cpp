/**
 *    author:  Amit Dey
 *    problem link: https://www.codechef.com/START66C/problems/BIN_BAT
 * 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){
    ll t;cin>>t;
    while (t--){
        ll n,a,b;cin>>n>>a>>b;
        ll totalTime= log2(n);
        totalTime = (totalTime*a)+(totalTime*b);
        totalTime-=b;
        cout<<totalTime<<endl;
    }
    return 0; 
}
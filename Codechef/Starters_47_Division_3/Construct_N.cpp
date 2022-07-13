/**
 *    author:  Amit Dey
 *    problem link: https://www.codechef.com/START47C/problems/CONN
 * 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){

    ll t;cin>>t;
    while (t--){
        ll n;cin>>n;
        bool flag=0;
        if(n%2==0)flag=1;
        else if( n%7==0)flag=1;
        else if((n%2)%7==0)flag=1;
        else if((n%7)%2==0)flag=1;
        else if(n>2&&(n-2)%7==0){
            flag=1;
        }
        else if(n>7&&(n-7)%2==0){
            flag=1;
        }

        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
    return 0; 
}
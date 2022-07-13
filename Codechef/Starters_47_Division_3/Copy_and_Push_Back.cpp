/**
 *    author:  Amit Dey
 *    problem link: https://www.codechef.com/START47C/problems/COPYPUSH
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){
    ll t;cin>>t;
    while (t--)
    {
        ll n;cin>>n;
        string s;cin>>s;
        bool flag=1;
        while (n>0){
            if(n%2){
                s.pop_back();
                n--;
            }
            else{
                ll x= n/2;
                string s1,s2;
                s1=s.substr(0,x);
                s2=s.substr(x,x);
                if(s1!=s2){
                    flag=0;
                    break;
                }
                else{
                    s=s1;
                    n/=2;
                }
            }
        }
        
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0; 
}
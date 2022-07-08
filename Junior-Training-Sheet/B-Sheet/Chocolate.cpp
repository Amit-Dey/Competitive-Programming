/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/617/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,flag=-1,x;cin>>n;
    long long ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x){
            if(flag==-1){
                ans=1;
            }else{
                ans*= i - flag;
            }
            flag = i;
        }
    }
    cout<<ans<<endl;
    return 0; 
} 
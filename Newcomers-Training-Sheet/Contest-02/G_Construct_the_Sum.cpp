/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G
 * 
**/

#include<bits/stdc++.h>
using namespace std;
main(){
    long long int t,n,s;cin>>t;
    while (t--){
        cin>>n>>s;
        if(s>(n*(n+1))/2)cout<<"-1"<<endl;
        else{ n=min(s,n);
            while(s>0){s-=n;cout<<n<<" ";n--;
                if(n>=s&&s!=0){cout<<s;break;}
            }cout<<endl;
        }
    }
} 
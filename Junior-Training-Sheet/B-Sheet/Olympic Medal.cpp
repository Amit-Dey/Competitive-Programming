/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/215/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{   

    int A,B,n,r1,p1,p2,x;
    cin>>n;cin>>r1;
    for (int i = 0; i < n-1; ++i){
        cin>>x;if(x>r1)r1=x;
    }

    cin>>n;cin>>p1;
    for (int i = 0; i < n-1; ++i){
        cin>>x;if(x>p1)p1=x;
    }

    cin>>n;cin>>p2;
    for (int i = 0; i < n-1; ++i){
        cin>>x;if(x<p2)p2=x;
    }
    cin>>A>>B;
    // cout<<r1<<" "<<p1<<' '<<p2<<" "<<A<<' '<<B<<endl;
    double r2=(r1*sqrt(double(B*p1)/double(B*p1+A*p2)));
    printf("%.12f",r2);    
    return 0;
}
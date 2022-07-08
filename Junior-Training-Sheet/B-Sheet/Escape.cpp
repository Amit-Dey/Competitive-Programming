/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/148/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    double p,d,t,f,c;
    cin>>p>>d>>t>>f>>c;
    double k=d-p,x=p*t,r=0;
    if(k>0)
        while((x+=x/k*p)<c)
            ++r,x+=p*(x/d+f);
    cout<<r;
    
    return 0;
}
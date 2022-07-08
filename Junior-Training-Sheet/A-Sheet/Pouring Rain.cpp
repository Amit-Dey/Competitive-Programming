/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/667/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159

int main(){   
    ll int d,h,v,e;
    long double ans=0,x;
    cin>>d>>h>>v>>e;
    x=(float)v/(float)((float)(pi*(float)d*(float)d)/4.0);
    if(x<(float)e){
        cout<<"NO"<<endl;
    }
    else{
        ans=(float)((float)h/(((4.0*(float)v)/(float)(pi*(float)d*(float)d))-(float)e));
        cout<<"YES"<<endl<<ans<<endl;        
    }
    
    return 0; 
} 


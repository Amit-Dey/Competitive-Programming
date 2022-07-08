/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/127/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int arr[10];
int main(){   
    int n,k;
    cin>>n>>k;
    int x1,x2,y1,y2;
    cin>>x1>>y1;
    long double m=0.0;
    for (int i = 0; i < n-1; ++i){
        cin>>x2>>y2;
        m+=(sqrt((pow((x2-x1),2))+(pow((y2-y1),2))));
        x1=x2;
        y1=y2;
    }
    long double ans=(m/50.0);
    ans*=(double)k;
    cout<<fixed<<setprecision(9)<<ans<<endl;

    return 0; 
} 

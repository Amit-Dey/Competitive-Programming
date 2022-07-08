/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/272/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){   
    int n,x,sum=0,c=0;cin>>n;
    for (int i = 0; i < n; ++i)
        cin>>x,sum+=x;
    n++;
    // cout<<sum<<endl;
    for(int i = 1; i <=5; ++i)
         if((sum+i)%n==1)c++;
    cout<<5-c<<endl;        
    return 0;
}

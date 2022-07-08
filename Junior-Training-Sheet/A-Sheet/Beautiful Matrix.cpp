/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/263/problem/A
*
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   
    int x,r,c;
    for (int i = 1; i <=5; ++i){
        /* code */
        for (int j =1; j <=5; ++j){
            /* code */
            cin>>x;
            if(x){
                r=i;
                c=j;
            }
        }
    }
    int ans;
    r-=3;
    if(r<0)r*=-1;
    c-=3;
    if(c<0)c*=-1;
    ans=r+c;
    cout<<ans<<endl;
    
    return 0; 
} 
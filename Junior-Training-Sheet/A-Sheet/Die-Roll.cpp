/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/9/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   
    int a,b;cin>>a>>b;
    int max=a;
    if(a<b)max=b;
    a=max-1;
    b=(6-a);
    a=6;
    for (int i =6; i >1; --i){
        /* code */
        if ((b%i==0)&&(a%i==0)){
            /* code */
            a/=i;
            b/=i;
        }
    }
    cout<<b<<"/"<<a<<endl;

    return 0; 
} 
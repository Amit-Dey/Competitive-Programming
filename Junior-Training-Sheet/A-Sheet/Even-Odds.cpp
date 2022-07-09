/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/318/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){      	
    ll int n,k,c=1;
    cin>>n>>k;
    if(n%2==0){
        if(k<=(n/2)){
            c=(k*2)-1;
        }
        else {
            k=k-n/2;
            c=k*2;
        }
    }
    else{
        if(k<=(n/2+1)){
            c=(k*2)-1;
        }
        else{
            k=k-(n/2+1);
            c=(k*2);
        }
    }
    cout<<c<<endl;
    return 0; 
} 
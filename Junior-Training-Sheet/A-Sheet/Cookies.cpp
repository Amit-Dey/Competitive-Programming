/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/129/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,od=0,evn=0;cin>>n;
    while(n--){
        cin>>x;
        (x%2)?od++:evn++;
    }
    (od%2)?cout<<od:cout<<evn;        
    return 0;
}
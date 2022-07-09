/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    (a+b-c==d||a-b+c==d||a*b+c==d||a*b-c==d||a+b*c==d||a-b*c==d)?cout<<"YES": cout<<"NO";
    return 0; 
} 
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n,k,a;
    cin>>n>>k>>a;
    ((n*k)%a)?cout<<"double":((n*k)/a>2147483647ll)?cout<<"long long":cout<<"int";
} 
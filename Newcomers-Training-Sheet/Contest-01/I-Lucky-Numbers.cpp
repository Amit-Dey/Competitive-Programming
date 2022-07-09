/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    scanf("%1d%1d",&a,&b);
    ((b!=0 && !(a%b))||(a!=0 && !(b%a)))?cout<<"YES":cout<<"NO";
} 
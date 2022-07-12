/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/H
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli gcd(lli a, lli b){
    return b ? gcd (b, a % b) : a;
}

lli lcm (lli a, lli b) {
    return a / gcd(a, b) * b;
}

int main(){
    lli a,b;cin>>a>>b;
    cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;    
    return 0; 
} 
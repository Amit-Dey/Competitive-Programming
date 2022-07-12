/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/B
 * 
**/

#include<bits/stdc++.h>
using namespace std;
bool isPrime(unsigned long long int n){
    if(n==1)return false;
    for(unsigned long long int i=2;i*i<=n;i++){
        if(n%i==0)return false;}
    return true;}
int main(){
    unsigned long  long int n;cin>>n;
    (isPrime(n))?cout<<"YES":cout<<"NO";
    return 0;
} 
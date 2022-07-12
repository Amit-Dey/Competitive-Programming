/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/C
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,s;cin>>a>>b;if(a>b)swap(a,b);
    cout<<(((abs(a-b)+1)*(a+b))/2)<<endl;a--;
    cout<<(((b/2)*((b/2)+1))-((a/2)*((a/2)+1)))<<endl;
    cout<<((((b+1)/2)*((b+1)/2))-(((a+1)/2)*((a+1)/2)))<<endl; 
} 
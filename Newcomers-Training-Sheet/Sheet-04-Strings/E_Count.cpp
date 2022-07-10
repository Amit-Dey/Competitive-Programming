/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define charToInt(c) (c-'0')

int main(){   
    ll int sum=0;
    string s;
    std::cin >> s;
    for(ll int i=0;i<s.size();i++){
        sum+=charToInt(s[i]);
    }
    
    std::cout << sum << std::endl;
    return 0;
}
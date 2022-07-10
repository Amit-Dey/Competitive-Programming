/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
 * 
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    std::cin >> s;
    string a = s;
    reverse(s.begin(),s.end());
    if(s==a)std::cout << "YES" << std::endl;
    else cout<< "NO"<<endl;
    return 0;
}
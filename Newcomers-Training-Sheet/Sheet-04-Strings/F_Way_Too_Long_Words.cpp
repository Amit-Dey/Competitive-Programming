/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define charToInt(c) (c-'0')

int main(){   
    int t;
    std::cin >> t;
    while(t--){
        string s;
        cin>> s;
        int a=s.size();
        if(a>10){
            std::cout << s[0]<<s.size()-2 <<s[s.size()-1] << std::endl;
        }
        else cout<<s<<endl;
    }
    return 0;
}
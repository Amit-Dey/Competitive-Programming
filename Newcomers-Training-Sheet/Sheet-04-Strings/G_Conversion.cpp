/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define charToInt(c) (c-'0')

int main(){   
    string s;cin>> s;
    for(int i=0;i<s.size();i++){
        if(s[i]==','){
            s[i]=' ';
        }
        else{
            if(s[i]>96)s[i]-=32;
            else s[i]+=32;
        }
    }
    std::cout << s << std::endl;
   
    return 0;
}
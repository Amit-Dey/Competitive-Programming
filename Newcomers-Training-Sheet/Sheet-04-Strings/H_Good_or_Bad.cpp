/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define charToInt(c) (c-'0')

int main()
{   int t;
    std::cin >> t;
    while(t--){
        string s;
        cin>>s;
        int l=1;
        int a=s.size()-2;
        for(int i=0;i<a;i++){
            if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'){
                l=0;
                break;
            }
            else if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'){
                l=0;
                break;
            }
        }
        if(l==1)std::cout << "Bad" << std::endl;
        else cout<<"Good"<<endl;
    }
    return 0;
}
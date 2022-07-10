/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int arr[26];
int main(){
    string s;cin >> s;
    sort(s.begin(), s.end());
    for(int i=0;i<s.size();i++){
        int j=((int)s[i]-97);
        arr[j]++;
    }
    char x;
    for(int k=0;k<26;k++){
        x=(char)k+97;
        if(arr[k]){
            std::cout << x<<" : "<<arr[k] << std::endl;
        }
    }
    
    return 0;
}
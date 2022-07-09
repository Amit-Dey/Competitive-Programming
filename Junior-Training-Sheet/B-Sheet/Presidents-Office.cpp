/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/6/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main() 
{   
    int n,m;
    char c;
    cin>>n>>m>>c;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];

    set<char> set;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]==c){
                if (i!=0&&s[i-1][j]!=c){
                    set.insert(s[i-1][j]);
                }
                if (i!=(n-1)&&s[i+1][j]!=c){
                    set.insert(s[i+1][j]);
                }
                if (j!=0&&s[i][j-1]!=c){
                    set.insert(s[i][j-1]);
                }
                if (j!=(m-1)&&s[i][j+1]!=c){
                    set.insert(s[i][j+1]);
                }
            }
        }
    }

    set.erase('.');
    // for(auto i:set)cout<<i<<" ";
    cout<<set.size()<<endl;

    return 0; 
} 
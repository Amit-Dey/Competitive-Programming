/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/677/problem/A
*
*/
#include<bits/stdc++.h>
using namespace std;

int main(){         
    
    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=1;i<=s.size();i++){
        if (i%2!=0)
        {
            m[(char)(s[i-1]-' ')]++;
        }
        else{
            if (m[s[i-1]]==0)
            {
                ans++;
            }
            else m[s[i-1]]--;
            
        }
    }
    cout<<ans<<endl;

    return 0; 
} 
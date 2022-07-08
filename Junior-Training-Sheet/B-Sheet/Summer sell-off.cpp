/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/810/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){       
    
    long long n,f;
        cin >> n >> f;
        vector<long long> v;
        
        long long ans = 0;
        
        for(long long i=0;i<n;i++){
            long long k,l;
            cin >> k >> l;
            ans += min(k,l);
            
            long long extra = min(2*k,l) - min(k,l);
            v.push_back(extra);
            
        }
        sort(v.begin(),v.end(),greater<long long>());
        for(long long i=0;i<f;i++){
            ans += v[i];
        }

        cout << ans;
    return 0; 
} 
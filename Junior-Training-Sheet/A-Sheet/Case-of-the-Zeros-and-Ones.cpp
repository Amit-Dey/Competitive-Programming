/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/556/problem/A
*
*/

    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long

    int main(){

        char c;
        int n,one=0,zero=0;
        cin>>n;
        for (int i = 0; i < n; ++i){
            cin>>c;
            if (c=='1'){
                if (zero>0)zero--;
                else one++;
            }
            else {
                if (one>0)one--;
                else zero++;
            }
        }
        cout<<max(one,zero)<<endl;
        
        return 0;
    }

/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/75/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

long long rm(long long x){

    long long a=0;
    vector<int>v;
    while(x){
        if(x%10!=0)
            v.push_back(x%10);
        x/=10;
    }
    for(int i=v.size()-1;i>=0;i--){
        a*=10;
        a+=v[i];
    }
    return a;
}

int main(){         
    
    long long a,b;
    cin>>a>>b;
    long long c=a+b;
    long long x=rm(a),y=rm(b),z=rm(c);
    if (x+y==z){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0; 
} 
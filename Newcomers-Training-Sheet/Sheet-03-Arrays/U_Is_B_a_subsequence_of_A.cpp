/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){   
    long long int a,b;
    cin>>a>>b;
    vector<ll int> c(a);
    vector<ll int> d(b);
    for(int i=0;i<a;i++){
        cin>>c[i];
    }
    for(int j=0;j<b;j++){
        cin>>d[j];
    }

    int i=0,j=0;
    while(i!=b){
        while(d[i]!=c[j]&&i!=b&&j!=a){
            j++;
        }
        if(j==a) break;
        i++;
        j++;
    }
    if(i==b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0; 
} 
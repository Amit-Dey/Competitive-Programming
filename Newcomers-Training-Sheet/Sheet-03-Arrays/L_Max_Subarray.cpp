/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void check(vector<int> x,int y){
    int max;
    for(int s=0;s<y;s++){
            max=x[s];
        for(int e=s;e<y;e++){
            for(int i=s;i<=e;i++){
                if(max<x[i]){
                    max=x[i];
                }
            }
            cout<<max<<" ";
            if(s == y-1) cout<<endl;
        }
    }
}

int main(){

    int a;cin>>a;
    for(int i=0;i<a;i++){
        int b;cin>>b;
        vector<int> c(b);
        for(int i=0;i<b;i++){
            cin>>c[i];
        }
        check(c,b);;
    }
    
    return 0; 
} 
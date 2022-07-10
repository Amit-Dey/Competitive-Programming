/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int arr[26];

int main(){
    int t;cin >> t;
    while(t--){
        string s,p;
        cin>>s>>p;
        int a=s.size();
        int b=p.size();
        int max=0,min=0,c=0;
        if(a>b){
            max=a;min=b;
            c=1;
        }
        else{
            min=a;max=b;
        }
        for(int i=0;i<min;i++){
            std::cout << s[i]<<p[i] ;
        }
        if(c){
            for(int j=min;j<a;j++)cout<<s[j];
        }
        else for(int k=min;k<b;k++) cout<<p[k];
        cout<<'\n';
    }
    
    return 0;
}
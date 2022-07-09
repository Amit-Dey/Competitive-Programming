/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/404/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){       
    int n;cin>>n;
    char arr[n][n];
    for (int i = 0; i < n; ++i){   
        for (int j = 0; j < n; ++j){
            cin>>arr[i][j];
        }
    }
    char x=arr[0][0],y=arr[0][1];
    for (int i = 0,j=n-1; i < n; ++i,--j){
        if(arr[i][i]!=x){
            cout<<"NO"<<endl;
            return 0;
        }
        else if(arr[i][j]!=x){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            for (int k = 0; k < n; ++k){
                if(k!=i&&k!=j){
                    if (arr[i][k]!=y){
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    if(x==y){cout<<"NO"<<endl;
        return 0;
    }
    
    cout<<"YES"<<endl;
    return 0; 
} 



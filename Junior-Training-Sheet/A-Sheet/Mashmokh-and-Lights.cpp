/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/415/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

int arr[102];
int main(){    
    int n,m,x;cin>>n>>m;
    for (int i = 0; i < m; i++){
        cin>>x;
        if(arr[x-1]==0){
            for (int j = x-1;arr[j]==0;j++)
                arr[j]=x;
        }
    }
    for (int i = 0; i <n; i++)
        cout<<arr[i]<<' ';
    return 0; 
} 

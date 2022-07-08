/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/490/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
int arr[5];
int main(){

    vector<int>one,two,three;
    int n,x;cin>>n;
    for (int i = 0; i < n; i++){
        cin>>x;
        arr[x]++;
        if(x==1)one.push_back(i+1);
        else if(x==2)two.push_back(i+1);
        else three.push_back(i+1);
    }
    int ans=min(arr[1],min(arr[2],arr[3]));
    cout<<ans<<endl;
    for (int i = 0; i < ans; i++){
        cout<<one[i]<<' '<<two[i]<<' '<<three[i]<<endl;
    }
    
    return 0; 
} 
/**
 *    author:  Amit Dey
 *    problem link: https://www.codechef.com/START66C/problems/MONOPOLY
 * 
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){
    ll t;cin>>t;
    while (t--)
    {
        ll arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[2]>(arr[0]+arr[1]))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0; 
}
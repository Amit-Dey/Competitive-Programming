/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){   

    int size,result=1,j=1;
    vector<ll int> N(100000);
    cin>>size;
    for(int k=1;k<=size;k++){ 
        cin>>N[k];
    }
    for(int i=size;i>=1;i--){   
        if(N[i]!=N[j]){
            result=0;
            break;
        }
    j++;
    }
    if(result==1){
        cout<<"YES"<<endl;
    }
    else if(result==0)
        cout<<"NO"<<endl;
    return 0; 
} 
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   
    int a,i,j=0,count=0;
    cin>>a;
    vector<int> b(a);
    for(i=0;i<a;i++){
        cin>>b[i];
    }
    while(j==0){
        for(int i=0;i<a;i++){
            if(b[i]%2==0){
                b[i]=b[i]/2;
            }
            else{
                j=1;
                break;
            }
        }
        count++;
    }
    if(count==1){
        cout<<0<<endl;
    }
    else{
        cout<<count-1<<endl;
    }
    
    return 0; 
} 
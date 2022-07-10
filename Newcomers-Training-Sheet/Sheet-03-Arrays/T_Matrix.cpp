/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    
    long long int a;
    long long int sum1=0,sum2=0;
    cin>>a;
    vector<vector<int>> b(a,vector<int>(a,0));
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>b[i][j];
            if(i==j){
                sum1+=b[i][j];
            }
        }
    }
    
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if((i+j)==(a-1)){
                sum2+=b[i][j];
            }
        }
    }
    int res=sum1-sum2;
    res=abs(res);
    cout<<res<<endl;
    
    return 0; 
}
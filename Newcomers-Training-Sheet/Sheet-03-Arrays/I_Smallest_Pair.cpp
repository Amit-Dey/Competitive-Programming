/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){   

    int count=1,T,size=0;
    ll int temp,result;
    vector<ll int> N(100000);
    cin>>T; 
    while(count<=T)
    {   bool keep_gooing=true;
        cin>>size;
        for(int k=1;k<=size;k++){
            cin>>N[k];
        }
        for(int i=1;i<size;i++){
            for(int j=i+1;j<=size;j++){
                temp=(N[i]+N[j]+j-i);
                if(keep_gooing==true){
                    result=temp;
                    keep_gooing=false;
                }
                if(temp<result){
                    result=temp;
                }
            }
        }
        cout<<result<<endl;
        count++;
    }
    return 0; 
} 
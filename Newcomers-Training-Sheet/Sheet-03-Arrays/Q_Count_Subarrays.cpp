/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int sub_array(vector<int> c,int d){
    int count=0;
    for(int i=0;i<d;i++){
        for(int j=i+1;j<d;j++){
            if(c[j-1]>=c[j]){
                break;
            }
            count++;
        }
    }
    return count;
}

int main(){
    int a,x,z;
        cin>>z;
        for(int i=0;i<z;i++){
            cin>>a;
            vector<int> b(a);
            for(int i=0;i<a;i++){
                cin>>b[i];
            }
            x=sub_array(b,a);
            cout<<x+a<<endl;
        }
    
    return 0; 
} 
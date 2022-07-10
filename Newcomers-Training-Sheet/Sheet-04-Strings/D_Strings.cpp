/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
 * 
**/

#include<bits/stdc++.h>
using namespace std;


int main(){   
    string x,y;
    cin>>x>>y;
    cout<<x.size()<<" "<<y.size()<<endl;
    cout<<x+y<<endl;
    swap(x[0],y[0]);
    cout<<x<<" "<<y<<endl;
    
    return 0;
}
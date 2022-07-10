/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
 * 
**/

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int a,d;
    cin>>a>>d;
    int b[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            cin>>b[i][j];
        }
    }
    int e;
    cin>>e;
    bool check=true;
    for(int i=0;check==true && i<a;i++){
        for(int j=0;j<d;j++){
            if(e==b[i][j]){
                cout<<"will not take number\n";
                check=false;
                break;
            }
        }
    }
    if(check==true){
        cout<<"will take number\n";
    }
    return 0;
}
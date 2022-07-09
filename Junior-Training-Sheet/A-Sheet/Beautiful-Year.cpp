/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/271/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
bool ok(int n){
    set<int> s;
    while(n){
        s.insert(n%10);
        n/=10;
    }
    return s.size()==4;
}
int main(){
    int n;cin>>n;
    while(n++){
        if(ok(n)){cout<<n<<endl;break;}
    }
}
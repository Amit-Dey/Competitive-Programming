/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/378/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    int x,y,z;x=y=z=0;
    for (int i = 1; i <=6; ++i)
    {
        if(abs(a-i)==abs(b-i))y++;
        else if(abs(a-i)>abs(b-i))z++;
        else x++;
    }    
    cout<<x<<' '<<y<<' '<<z<<endl;    
    return 0;
}
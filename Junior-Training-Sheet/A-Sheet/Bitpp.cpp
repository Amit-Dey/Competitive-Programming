/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/282/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){   
    
    int t,x=0;
    cin>>t;
    while(t--){
        char a,b,c;
        cin>>a>>b>>c;
        switch (a){
        case 'X':
            if(b=='+'&&c=='+')x++;
            else if(b=='-'&&c=='-')x--;
            break;

        case '+':
            if(b=='+'&&c=='X')x++;
            break;

        case '-':
            if(b=='-'&&c=='X')x--;
            break;
        
        default:
            break;
        }
    }
    cout<<x<<endl;
    return 0; 
} 
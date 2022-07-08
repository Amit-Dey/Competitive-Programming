/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/476/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1||n==0)return 1;
    else return n*fact(n-1);
}

int main(){

    string s,p;cin>>s>>p;
    int n=s.size();
    int c=0,d=0,e=0;
    for (int i = 0; i < n; i++)
        s[i]=='+'?c++:c--;
    for (int i = 0; i < n; i++){
        if(p[i]=='+')d++;
        else if(p[i]=='-')d--;
        else e++;
    }
    if(!e){
        d==c?cout<<"1.0000000000":cout<<"0.00000000000";
    }
    else{
        int x= e+(c-d),ans;
        if(x%2==0&&x/2>=0&&x/2<=e){
            ans=(fact(e)/(fact(e-x/2)*fact(x/2)));
            printf("%0.12f",double(ans)/double(pow(2,e)));
        }
        else cout<<"0.000000000000";
    }
    
    return 0; 
} 
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
 * 
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int x;
    for(int i=0; i<str.size(); i++){
        if((str[i]=='e' || str[i]=='E') && (str[i+1]=='g' || str[i+1]=='G') 
            && (str[i+2]=='y' || str[i+2]=='Y') && (str[i+3]=='p' || str[i+3]=='P') 
                && (str[i+4]=='t' || str[i+4]=='T')){
                    str.erase(str.begin()+i, str.begin()+i+4);
                    str[i] = ' ';
        }
    }
    cout << str << endl;
    return 0;
}
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U
 * 
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;cin >> S;
    int count=0;
    int CE=0, CG=0, CY=0, CP=0, CT=0;
    for(int i=0; i<S.size(); i++){
        if(S[i] == 'e' || S[i] == 'E'){
            CE ++;
        }
        else if(S[i] == 'g' || S[i] == 'G'){
            CG ++;
        }
        else if(S[i] == 'y' || S[i] == 'Y'){
            CY ++;
        }
        else if(S[i] == 'p' || S[i] == 'P'){
            CP ++;
        }
        else if(S[i] == 'T' || S[i] == 't'){
            CT ++;
        }
    }
    if(CE != 0 && CG != 0 && CY != 0 && CP != 0 && CT != 0){
        cout << min({CE,CG,CY,CP,CT}) << endl;
    }
    else cout << 0;
}
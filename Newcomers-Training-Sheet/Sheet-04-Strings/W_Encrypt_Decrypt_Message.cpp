/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W
 * 
**/

#include<bits/stdc++.h>

using namespace std;

int main(){
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int N;
    string word;
    cin >> N;
    cin >> word;
    if(N == 1){
        for(int i=0; i<word.size(); i++){
            for(int j=0; j<original.size(); j++){
                if(word[i] == original[j]){
                    cout << key[j];
                }
            }
        }
    }
    else{
        for(int i=0; i<word.size(); i++){
            for(int j=0; j<key.size(); j++){
                if(word[i] == key[j]){
                    cout << original[j];
                }
            }
        }
    }
    cout<<endl;

    return 0;
}
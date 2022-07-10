/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int arr[5];

int main(){
    string s;
    std::cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='h'&&arr[0]==0){
            arr[0]++;
        }
        else if(s[i]=='e'&&arr[1]==0&&arr[0]){
            arr[1]++;
        }
        else if(s[i]=='l'&&arr[2]==0&&arr[1]){
            arr[2]++;
        }
        else if(s[i]=='l'&&arr[3]==0&&arr[2]){
            arr[3]++;
        }
        else if(s[i]=='o'&&arr[4]==0&&arr[3]){
            arr[4]++;
        }
    }
    int c=1;
    for(int i=0;i<5;i++){
        if(arr[i]==0){
            c=0;
            break;
        }
    }
    if(c==1)std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
    
    return 0;
}
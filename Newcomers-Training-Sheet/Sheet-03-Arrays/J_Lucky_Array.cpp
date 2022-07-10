/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
 * 
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    std::cin >> n;
    int arr[n],min=100006;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<min)min=arr[i];
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==min)c++;
    }
    if(c%2)std::cout << "Lucky" << std::endl;
    else cout<< "Unlucky"<<endl;
    return 0;
}
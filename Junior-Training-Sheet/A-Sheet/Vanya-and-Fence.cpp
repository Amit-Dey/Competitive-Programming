/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/677/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define charToInt(c) (c-'0')

int main()
{   int n,h,whdth=0;
    cin>>n;
    int ar[n];
    
    std::cin >>h;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        if(ar[i]>h)whdth+=2;
        else whdth++;
    }
    std::cout << whdth << std::endl;
    return 0;
}
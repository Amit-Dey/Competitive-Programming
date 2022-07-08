/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/236/problem/B
*
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m,a, b, c;
    cin >> a >> b >> c;
    m = a * b * c;
    int arr[m+1]={0};
    for(int i = 1; i <= m; i++){
        for(int j = i; j <= m; j += i)
            arr[j]++;
    }

    long long ans = 0, mod = 1073741824;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                ans += arr[i * j * k];
                ans = ans % mod;
            }
        }
    }
    cout << ans;
 //
    return 0;
}
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K
 *
 **/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (x > n)
        x = x % n;
    x--;
    for (int i = n - x, j = 0; j < n; j++, i++){
        cout << a[i] << ' ';
        if (i == n)
            i = 0;
    }
}
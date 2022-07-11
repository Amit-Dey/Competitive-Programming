/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J
 *
 **/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long double x, s = 0;
    for (int i = 0; i < n; i++)
        cin >> x, s += x;
    cout << setprecision(7) << fixed << s / n;
}
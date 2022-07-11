/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
 *
 **/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        swap(a[x - 1][i], a[y - 1][i]);
    for (int i = 0; i < n; i++)
        swap(a[i][x - 1], a[i][y - 1]);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
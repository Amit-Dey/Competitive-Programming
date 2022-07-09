/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/287/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    vector <string> v(4);
        for (string &i : v) cin >> i;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                int count = 0;
                count += v[i][j] == '.';
                count += v[i][j + 1] == '.';
                count += v[i + 1][j] == '.';
                count += v[i + 1][j + 1] == '.';
                if (count != 2) {cout << "YES"; return 0;}
            }
        }
        cout << "NO";
        return 0;
    }
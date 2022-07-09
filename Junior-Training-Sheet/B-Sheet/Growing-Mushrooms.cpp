/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/186/problem/B
*
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

  int n, t1, t2, u, v, k;
  cin >> n >> t1 >> t2 >> k;
  vector<pair<int, int>> tbl;
  for (int i = 1; i <= n; i++){
    cin >> u >> v;
    tbl.push_back(make_pair(max((u * t1) * (100 - k) + 100 * (v * t2), (v * t1) * (100 - k) + 100 * (u * t2)), -i));
  }
  sort(tbl.rbegin(), tbl.rend());
  for (auto i : tbl){
    cout << setprecision(2) << fixed << -i.second << " " << (i.first) / 100.0 << endl;
  }

  return 0;
}

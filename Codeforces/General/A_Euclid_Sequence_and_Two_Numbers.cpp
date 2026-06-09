#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        bool ok = true;
        for (int i = 0; i < n - 2; i++) {
            if (a[i + 2] != a[i] % a[i + 1]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << a[0] << " " << a[1] << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if (n == 10) {
            cout << "-1\n";
        } else if (n % 12 == 10) {
            cout << "22 " << n - 22 << "\n";
        } else {
            cout << n % 12 << " " << n - (n % 12) << "\n";
        }
    }
    return 0;
}
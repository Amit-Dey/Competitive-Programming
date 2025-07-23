/****
 *  Problem Link:https://codeforces.com/problemset/problem/1999/A
 *  Author: AMIT DEY
 */

var t = +readline();
while (t--) {
    var n = +readline();
    var ans = n % 10;
    n = n - ans;
    if (n > 0) {
        ans += n / 10;
    }
    print(ans);
}

/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
 * 
**/

#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, a;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        a = t1 + t2;
        t1 = t2;
        t2 = a;
    }
    return 0;
}
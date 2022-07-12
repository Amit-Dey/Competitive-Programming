/**
 *    author:  Amit Dey
 *    problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
 *
 **/
#include <cstdio>
#include <algorithm>
    using namespace std;

int N, Q;
int main(){

    scanf("%d", &N);
    int chimps[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &chimps[i]);
    scanf("%d", &Q);
    int luchu;
    for (int i = 0; i < Q; i++){
        scanf("%d", &luchu);
        int *lb = lower_bound(chimps, chimps + N, luchu);
        int *ub = upper_bound(chimps, chimps + N, luchu);
        int high = ub - chimps;
        lb--;
        int low = lb - chimps;
        if (lb == chimps + N || lb - chimps < 0)
            printf("X %d\n", chimps[high]);
        else if (ub == chimps + N)
            printf("%d X\n", chimps[low]);
        else
            printf("%d %d\n", chimps[low], chimps[high]);
    }

    return 0;
}   
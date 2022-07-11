/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
 *
 **/

#include <stdio.h>
void p(int a){
    for (int i = 1; i <= a; i++){
        printf("%d", i);
        if (i < a)
            printf(" ");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    p(n);

    return 0;
}
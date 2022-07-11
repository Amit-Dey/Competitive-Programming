/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
 *
 **/

#include <stdio.h>
void mn(){
    int n;
    char c;
    scanf("%d %c", &n, &c);
    for (int i = 1; i <= n; i++)
    {
        printf("%c", c);
        if (i < n)
            printf(" ");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    while (n--){
        mn();
        printf("\n");
    }
    return 0;
}
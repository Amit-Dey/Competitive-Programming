/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
 *
 **/

#include <stdio.h>

int dToB(int n){
    int bNum[32], i = 0, j;
    while (n > 0){
        bNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    j = (i - 1);
    for (int k = 0; k < (i - 1); k++){
        if (bNum[k] != bNum[j]){
            printf("NO\n");
            return 0;
        }
        j--;
    }
    printf("YES\n");
}

void wonderful(int a){
    if (a % 2 != 0)
        dToB(a);
    else
        printf("NO\n");
}

int main(){
    int n;
    scanf("%d", &n);
    wonderful(n);
    return 0;
}
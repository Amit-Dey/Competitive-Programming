/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
 * 
**/

#include <stdio.h>
#include<string.h>

int main(){   
    int count;
    char F1[100],S1[100],F2[100],S2[100];
    scanf("%s %s %s %s",F1,S1,F2,S2);
    count = strcmp(S1, S2);
    if(count==0){
        printf("ARE Brothers");
    }
    else printf("NOT");

    return 0;
}
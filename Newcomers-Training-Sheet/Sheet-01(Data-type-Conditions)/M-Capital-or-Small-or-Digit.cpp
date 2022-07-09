/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
 * 
**/

#include<stdio.h>

int main(){   
    char X;
    scanf("%c",&X);
    if(X>=48&&X<=57){
        printf("IS DIGIT");
    }
    else if((X>=65&&X<=90)){
        printf("ALPHA\nIS CAPITAL");
    }
    else if((X>=97&&X<=122)){
        printf("ALPHA\nIS SMALL");
    }

    return 0;
}
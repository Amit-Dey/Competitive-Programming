/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
 * 
**/

#include<stdio.h>
 
int main()
{   char S;
    int A,B;
    scanf("%d%c%d",&A,&S,&B);
    switch(S){
        case '+':
        printf("%d",(A+B));
        break;
        
        case '-':
        printf("%d",(A-B));
        break;
        
        case '*':
        printf("%d",(A*B));
        break;
        
        case '/':
        printf("%d",(A/B));
        break;
    }
 
    return 0;
}
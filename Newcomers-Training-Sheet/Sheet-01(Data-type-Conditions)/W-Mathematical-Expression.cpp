/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
 * 
**/

#include <stdio.h>
int main(){
    char S,Q;
    int A,B,C;
    scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);
    switch(S){
        case '+':
            if((A+B)==C)
                printf("Yes");
            else
                printf("%d",(A+B));
        break;
        case '-':
            if((A-B)==C)
                printf("Yes");
            else
                printf("%d",(A-B));
        break;
        case '*':
            if((A*B)==C)
                printf("Yes");
            else
                printf("%d",(A*B));
        break;
    }
    return 0;
}
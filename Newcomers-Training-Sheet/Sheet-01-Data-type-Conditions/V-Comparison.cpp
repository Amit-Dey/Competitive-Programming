/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
 * 
**/

#include <stdio.h>
int main(){
    char S;
    int A,B;
    scanf("%d %c %d",&A,&S,&B);
    switch(S){
        case '>':
            if(A>B)
                printf("Right");
            else
                printf("Wrong");
        break;

        case '<':
            if(A<B)
                printf("Right");
            else
                printf("Wrong");
        break;

        case '=':
            if(A==B)
                printf("Right");
            else
                printf("Wrong");
        break;
    }
    return 0;
}
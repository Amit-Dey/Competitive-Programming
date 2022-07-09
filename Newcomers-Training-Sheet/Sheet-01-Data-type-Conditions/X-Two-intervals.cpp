/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
 * 
**/

#include <stdio.h>
int main(){
    long int L1,R1,L2,R2;
    scanf("%ld %ld %ld %ld",&L1,&R1,&L2,&R2);
    if(((L1<L2)&&(R1<L2)&&(L1<R2)&&(R1<R2))||((L1>R2)&&(R1>R2)&&(L1>L2)&&(R1>L2))){
        printf("-1");
    }

    else{
        if((L1==L2)&&(R1==R2)){
            printf("%d %d",L1,R1);
        }

        else if((L2<L1)&&(R1<R2)){
            printf("%d %d",L1,R1);
        }

        else if((L2>L1)&&(R1>R2)){
            printf("%d %d",L2,R2);
        }

        else if((L1<=L2)&&(R1>=L2)&&(R1<=R2)){
            printf("%d %d",L2,R1);
        }

        else if((R2>=L1)&&(R2<=R1)&&(L1>=L2)){
            printf("%d %d",L1,R2);
        }

    }

    return 0;
}
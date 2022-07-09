/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
 * 
**/

#include <stdio.h>
int main(){
    double x,d;
    scanf("%lf",&x);
    d=(x-(int)x);
        if(d==0){
            printf("int %d",(int)x);
        }
        else{
            printf("float %d %.3f",(int)x,d);
        }

    return 0;
}
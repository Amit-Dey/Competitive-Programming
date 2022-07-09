/*
*   Author: Amit Dey
*   Problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051
*
*/

#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    unsigned int n;
    unsigned int x;
    
    while(1){
        scanf("%u",&n);
        if(n==0) break;
        
        x=sqrt(n);
        
        if(n==x*x) printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}
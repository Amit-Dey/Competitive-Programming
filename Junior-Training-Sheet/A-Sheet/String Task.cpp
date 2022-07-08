/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/118/problem/A
*
*/

#include <stdio.h>
#include <string.h>
int main(){
    int x;
    char ww[100];
    gets(ww);
    x=strlen(ww);
    for(int i=0;i<x;i++){
        if((ww[i]=='A')||(ww[i]=='O')||(ww[i]=='Y')||
           (ww[i]=='E')||(ww[i]=='U')||(ww[i]=='I')||
           (ww[i]=='a')||(ww[i]=='o')||(ww[i]=='y')||
           (ww[i]=='e')||(ww[i]=='u')||(ww[i]=='i'))
        {
            continue;
        }
        ((ww[i]>='A')&&(ww[i]<='Z'))?printf(".%c",(ww[i]+32)):printf(".%c",ww[i]);

    }

  return 0;
}

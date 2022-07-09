/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/80/problem/A
*
*/

#include<stdio.h>
#include <iostream> 
#include <math.h> 
using namespace std; 

int cp(int a){
   int c; 
   for ( c = 2 ; c <= a - 1 ; c++ ){ 
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}
 

int main(){ 
    long int n,m,f=0,z;
    cin >> n;
    cin >> m;
    for(int i=n+1;i<=m;i++){   
        z=cp(i);
        if(z==1){
            f++;
        }
        else if(f==1){
            f=0;
            break;
        }
    }

    if(f==1)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
	
	return 0; 
}
/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D
 * 
**/

#include<stdio.h>
#include<math.h>
int isprime(int a)
	{  for(int i=3;i<=sqrt(a);i+=2)
	  {  if(a%i==0){
	  	  printf("NO\n");
	  	  return 0;
	  	}
	  }
	  printf("YES\n");
	 }


int main(){
    int n,x;
    scanf("%d",&n);
    while(n--)
    {  scanf("%d",&x);
       if(((x%2==0)&&(x!=2))||(x==1))
       {
           printf("NO\n");
       }
       else
        isprime(x);
    }
    return 0;
}
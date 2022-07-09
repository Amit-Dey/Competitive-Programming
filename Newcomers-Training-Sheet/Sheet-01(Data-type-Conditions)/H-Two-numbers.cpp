/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
 * 
**/

#include <stdio.h>

int main(){
  int a, b, ceil_ = 1;
  float round_ = 0;
  scanf ("%d %d", &a, &b);
  round_ = (float) (a % b) / b;
  if (round_ < 0.5){
      round_ = a / b;
    }
  else{
      round_ = (a / b + 1);
    }
  (a > b) ? ceil_ = (a / b + 1) : 1;
  printf ("floor %d / %d = %d\n", a, b, (a / b));
  printf ("ceil %d / %d = %d\n", a, b, ceil_);
  printf ("round %d / %d = %d\n", a, b, (int) round_);

  return 0;
}
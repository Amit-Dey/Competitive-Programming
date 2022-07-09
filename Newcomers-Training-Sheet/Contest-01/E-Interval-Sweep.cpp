/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E
 * 
**/

  #include<bits/stdc++.h>
  using namespace std;
  #define ll long long

  int main(){   

      int a,b;
      cin>>a>>b;
      if (abs(b-a)<2&&!(a==0&&b==0)){
          cout<<"YES"<<endl;        
      }
      else{
        cout<<"NO"<<endl;
      }
      
      return 0;
  }
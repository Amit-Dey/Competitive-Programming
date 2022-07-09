/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
 * 
**/

  #include<bits/stdc++.h>
  using namespace std;
  #define ll long long

  int main(){   
      int k,s,x,ans=0;
      cin>>k>>s;
      for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
          x=i+j;
          if((x+(s-x))==s&&(s-x)>=0&&(s-x)<=k)
            ans++;          
        } 
      }
      cout<<ans<<endl;
      
      return 0;
  }
/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/1237/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

#define  fastt      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll          long long
#define  pb         push_back
#define  inf        1000000000000000000
#define  mp         make_pair
#define  sz(a)      a.size()
#define  clr(x)     x.clear()
#define  ff         first
#define  ss         second
#define  case(x)    cout << "Case " << x <<": "
#define  vl         vector <ll>
#define  vs         vector <string>
#define  vc         vector <char>
#define  vpll       vector < pair <ll, ll> >
#define  vpsl       vector < pair <string, ll> >
#define  vpls       vector < pair <ll, string> >
#define  pql        priority_queue<ll>

ll pow(ll c,ll d){return d==0?:c*pow(c,d-1);}
ll gcd(ll a,ll b) {return b==0? a:gcd(b,a%b);}
ll lcm(ll a,ll b) {return ((a*b)/gcd(a,b));}

#define f(j,l)      for (int i = j; i <l; ++i)
#define fn(j,l)     for (int i = j; i >l; --i)



int main(){   
      
    fastt;

    int n,x;
    cin>>n;
    bool l=true;

    for (int i = 1; i <=n; ++i){
      
        cin>>x;
        if(x==0){
           cout<<"0"<<endl;
           continue;
        }
        else if(x %2!=0){
            
            if(l){
              cout << (x + 1)/2 << endl;
              l=false;
            }
            else{
              cout << (x -1)/2 << endl;
              l=true;
            }
            
        } 
        else
            cout << x/2 << endl;

    }

    return 0; 
} 
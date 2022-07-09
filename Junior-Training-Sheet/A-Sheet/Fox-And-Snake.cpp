/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/510/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;

#define  fastt      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  ll         long long
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
#define  tt         ll int t;cin>>t;while(t--)

ll pow(ll c,ll d){return d==0?:c*pow(c,d-1);}
ll gcd(ll a,ll b) {return b==0? a:gcd(b,a%b);}
ll lcm(ll a,ll b) {return ((a*b)/gcd(a,b));}

#define f(j,l)      for (int i = j; i <l; ++i)
#define fn(j,l)     for (int i = j; i >l; --i)

// cout << fixed << setprecision(12);


int main(){   

    fastt;
    
    int n,m,l=1,x=0;
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i%2)cout<<"#";
            else{   if(l&&j==m){
                         cout<<"#";
                         l=0;
                    }
                    else if(!l&&j==1){
                         cout<<"#";
                         x=1;
                    }
                     else cout<<".";
                }
        }
        if(x){
            x=0;
            l=1;
        }
        cout<<endl;
    }

    return 0; 
} 

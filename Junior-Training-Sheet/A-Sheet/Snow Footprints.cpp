/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/298/problem/A
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

    int n,l=1,r=1,x,y,a=0,b=0;
    cin>>n;
    std::vector<char > v(n+1);
    for (int i = 1; i <=n; ++i){
        cin>>v[i];
        if(v[i]=='L'){
            r=0;
            x=i;
        }
        if(v[i]=='R'){
            l=0;
            y=i;
        }
        if(!a&&v[i]=='R')a=i;
        if(!b&&v[i]=='L')b=i;
    
    }
    if(r){
        cout<<a<<" "<<y+1<<endl;
    }
    else if(l){
        cout<<x<<" "<<b-1<<endl;
    }
    else {
        cout<<a<<" "<<y<<endl;
    }

    return 0; 
} 
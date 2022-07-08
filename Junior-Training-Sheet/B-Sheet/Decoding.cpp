/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/746/problem/B
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
    
    int n;cin>>n;
    string s;cin>>s;

    string l="",r="";
    if (n%2==0){
            for (int i = 0; i <n; ++i)
                {
                    if(i%2==1)r.push_back(s[i]);
                    else l.push_back(s[i]);
                }
                reverse(l.begin(), l.end());
                cout<<l<<r;
        }
    else {
        for (int i = 0; i <n; ++i){
                if(i%2==0)r.push_back(s[i]);
                else l.push_back(s[i]);
            }
            reverse(l.begin(), l.end());
            cout<<l<<r;
    }

    return 0; 
} 
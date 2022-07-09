/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/143/problem/A
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
    
    int r1,r2,c1,c2,d1,d2,a,b,c,d,p=9,q=9;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    if(c1<9)p=c1;
    if(c2<9)q=c2;
    for (int i = 1; i <=p; ++i){
        for (int j =1; j <=q; ++j){
            a=i,b=j;
            c=c1-a;
            d=c2-b;
            if((a+b==r1)&&(c+d==r2)&&(a+c==c1)&&(b+d==c2)&&(a+d==d1)&&(b+c==d2)){
                    if(a==b||a==c||a==d||b==c||b==d||c==d)continue;
                    if(a>9||b>9||c>9||d>9)continue;
                    if(a<1||b<1||c<1||d<1)continue;

                    cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
                    return 0;

            }
        }
    }
    cout<<"-1"<<endl;

    return 0; 
} 
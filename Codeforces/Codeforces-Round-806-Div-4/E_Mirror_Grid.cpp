/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/contest/1703/problem/E
 * 
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lll __int128_t
#define tcT template<class T

// pairs
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pss pair<string,string>
#define pdd pair<double,double>
#define mp make_pair
#define f first
#define s second

// vectors
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pii>
#define vb vector<bool>
#define vs vector<string>
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend() 
#define sor(x) sort(all(x)) 
#define rsz resize
#define ins insert 
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

#define lb lower_bound
#define ub upper_bound

// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define rep(a) F0R(_,a)
#define each(a,x) for (auto& a: x)

#define str string

bool dbl_com(ll a,ll b){if(abs(a-b)<1e-9)return true;else return false;} //double compare
ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down
tcT> bool ckmin(T& a, const T& b) {
    return b < a ? a = b, 1 : 0; } // set a = min(a,b)
tcT> bool ckmax(T& a, const T& b) {
    return a < b ? a = b, 1 : 0; } // set a = max(a,b)
tcT> void rem_dup(vector<T>& v) { // sort and remove duplicates
    sort(all(v)); v.erase(unique(all(v)),end(v)); }

inline ll StringToInt(string a){
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

int dirx[8]={-1,0,0,1,-1,-1,1,1}, diry[8]={0,1,-1,0,-1,1,-1,1};
const int dx[4]{1,0,-1,0}, dy[4]{0,1,0,-1}; // for every grid problem!!
const int MOD = 1e9+7; // 998244353;
ll INFF = 1000000000000000005LL;
ll t,n,m,ans,mx,mn,cnt,sum,a,b,c,x,y,u,v;


// solution comes here
ll solution(){
    t=1;
    cin>>t;
    while (t--){
        cin>>n;
        vector<string>arr(n+1);
        for (ll i = 1; i <=n; i++){
            cin>>arr[i];
            arr[i]="#"+arr[i];
        }
        ans=0;
        vector<ll>x(4),y(4);
        x[0]=0,y[0]=0;
        x[1]=0,y[1]=n+1;
        x[2]=n+1,y[2]=n+1;
        x[3]=n+1,y[3]=0;

         for (ll i = 1; i <= n; i++){
            for (ll j = 1; j <= n; j++){
                ll flag =0;
                ll disx=i-x[0];
                ll disy=j-y[0];

                ll p1x=x[1]+disy;
                ll p1y=y[1]-disx;

                ll p2x=x[2]-disx;
                ll p2y=y[2]-disy;

                ll p3x=x[3]-disy;
                ll p3y=y[3]+disx;
                ll cnt0=0,cnt1=0;

                if(arr[i][j]=='0')cnt0++;
                else cnt1++;
                if(arr[p1x][p1y]=='0')cnt0++;
                else cnt1++;
                if(arr[p2x][p2y]=='0')cnt0++;
                else cnt1++;
                if(arr[p3x][p3y]=='0')cnt0++;
                else cnt1++;

                ans+=min(cnt0,cnt1);
            }
        }
        cout<<ans/4<<endl;
        
    // printf("%.9f\n",ans);
    }
    
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    solution();

}

/* stuff you should look for
    * int overflow, array bounds
    * special cases (n=1?)
    * DON'T GET STUCK ON ONE APPROACH
*/
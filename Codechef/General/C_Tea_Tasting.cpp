#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bs(ll l, ll h, ll k, ll sub, ll pre[])
{
    if(l<=h){
        ll m=(l+h)/2;
        
        if(pre[m]-sub<=k){
            if(m==h){
                return m;
            }else{
                if(pre[m+1]-sub<=k){
                    return bs(m+1, h, k, sub, pre);
                }else{
                    return m;
                }
            }
        }else{
            return bs(l, m-1, k, sub, pre);
        }
    }else{
        return -1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, sum;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        ll a[n], b[n], full[n], ans[n], pre[n];
        
        for(i=0; i<n; i++){
            full[i]=ans[i]=0;
        }
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for(i=0; i<n; i++){
            cin>>b[i];
        }
        
        pre[0]=b[0];
        
        for(i=1; i<n; i++){
            pre[i]=pre[i-1]+b[i];
        }
        
        for(i=0; i<n; i++)
        {
            if(i>0)
            j=bs(i, n-1, a[i], pre[i-1], pre);
            else
            j=bs(i, n-1, a[i], 0, pre);
            
            if(j==-1){
                ans[i]+=a[i];
            }else{
                full[i]++;
                if(j+1<n){
                    full[j+1]--;
                    ans[j+1]=ans[j+1]+(a[i]-(pre[j]-(i>0?pre[i-1]:0)));
                }
            }
        }
        
        for(i=1; i<n; i++){
            full[i]+=full[i-1];
        }
        
        for(i=0; i<n; i++){
            ans[i]=ans[i]+full[i]*b[i];
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}
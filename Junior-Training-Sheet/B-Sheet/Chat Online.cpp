/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/469/problem/B
*
*/

    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int i,j,p,q,r,l,g,A,a[50],b[50],c[50],d[50];

    int main(){
            
        cin>>p>>q>>l>>r;
        for(;i<p;i++)cin>>a[i]>>b[i];
        for(;j<q;j++)cin>>c[j]>>d[j];
        for(;l<=r;l++)
        for(g=i=0;i<p&&!g;i++)
            for(j=0;j<q&&!g;j++)
                if(a[i]<=d[j]+l&&b[i]>=c[j]+l)g=++A;
        cout<<A<<endl;
        
        return 0;
    }
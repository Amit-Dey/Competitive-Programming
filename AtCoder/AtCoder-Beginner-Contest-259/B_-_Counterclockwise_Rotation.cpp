#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main(){

    double a,b,c,r,x,y,d;
    cin>>a>>b>>c;
    r=sqrt(((a*a)+(b*b)));
    d=atan2(b,a);
    c=c*(M_PI/180);
    
    c+=d;
    x=(r*cos(c));
    y=(r*sin(c));
    cout<<fixed<<setprecision(10)<<x<<'\n'<<y<<endl;
    return 0; 
}


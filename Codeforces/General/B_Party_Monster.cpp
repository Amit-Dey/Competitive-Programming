#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char c;
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            if(c=='(')
            {
                count++;
            }
        }
        if(count== n-count)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}
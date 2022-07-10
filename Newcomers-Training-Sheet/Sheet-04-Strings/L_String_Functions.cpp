/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L
 * 
**/

#include<bits/stdc++.h>
using namespace std;
int arr[26];
int main(){
    int n,t;cin >> n>>t;
    string s;cin>>s;
    while(t--){
        string arr;
        cin>>arr;
        if(arr=="pop_back")s.pop_back();
        else if(arr=="front")std::cout << s[0] << std::endl;
        else if(arr=="back")std::cout << s[s.size()-1] << std::endl;
        else if(arr=="sort"){
            int l,r;
            cin>>l>>r;
            if(l>r)swap(l,r);
            sort(s.begin()+l-1, s.begin()+r);
        }
        else if(arr=="reverse"){
            int l,r;
            cin>>l>>r;
            if(l>r)swap(l,r);
            reverse(s.begin()+l-1, s.begin()+r);
        }
        else if(arr=="print"){
            int pos;
            cin>>pos;
            cout<<s[pos-1]<<endl;
        }
        else if(arr=="substr"){
            int l,r;
            cin>>l>>r;
            if(l>r)swap(l,r);
            std::cout << s.substr(l-1,r-l+1) << std::endl;
        }
        else if(arr=="push_back"){
            char x;
            cin>>x;
            s.push_back(x);
        }
    }
    return 0;
}
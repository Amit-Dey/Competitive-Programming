/**
 *    author:  Amit Dey
 *    problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P
 * 
**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void rs(char* c){
    char d[1000001];
    int i=0;
    int j=0;
    while(c[i]){
        while( (c[i]==' ' || c[i]=='!' || c[i]=='.' || c[i]=='?' || c[i]==',' )&& c[i]!='\0') i++;
        while( c[i]!=' ' && c[i]!='!' && c[i]!='.' && c[i]!='?' && c[i]!=','  && c[i]!='\0'){
            d[j]=c[i];
            i++;
            j++;
        }
        if(c[i]=='\0' && d[j-1]==' '){
            d[j-1]='\0';
            break;
        }
        if(c[i]==' ') d[j]=c[i];
        else if(c[i]=='!' || c[i]=='.' || c[i]=='?' || c[i]==',' ){
            d[j]=' ';
        }
        j++;
    }
    int count=0;
    int m;
    for(m=0;d[m]!='\0';m++){
        if(d[m]==' '){
            count++;
        }
    }
    cout<<count+1<<endl;
}
int main(){	
    char a[1000001];
    scanf(" %[^\n]",a);
    rs(a);
    return 0;
}
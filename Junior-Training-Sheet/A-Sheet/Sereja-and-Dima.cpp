/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/381/problem/A
*
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {   
    
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i){
    	/* code */
    	cin>>arr[i];
    }
    int sl=1,dl=0,s=0,d=0;
    for (int i = 0,k=0,j=n-1; i < n; ++i){
    	/* code */
    	if (arr[k]>arr[j]){
    		/* code */
    		if (sl){
    			/* code */
    			s+=arr[k];
    			sl=0;
    			dl=1;
    			k++;
    		}
    		else if(dl){
    			d+=arr[k];
    			dl=0;
    			sl=1;
    			k++;
    		}
    	}
    	else{
    		if (sl){
    			/* code */
    			s+=arr[j];
    			sl=0;
    			dl=1;
    			j--;
    		}
    		else if(dl){
    			d+=arr[j];
    			dl=0;
    			sl=1;
    			j--;
    		}
    	}
    }
    cout<<s<<" "<<d<<endl;
    return 0; 
} 
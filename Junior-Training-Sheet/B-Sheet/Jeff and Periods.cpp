/*
*   Author: Amit Dey
*   Problem link: https://codeforces.com/contest/352/problem/B
*
*/

#include<cstdio>
using namespace std;
int a1[100001],a2[100001];
bool b1[100001];
int main() {

	int n,a,o=0;
	scanf("%d",&n);
	for(int i=1;i<=n;++i) {
		scanf("%d",&a);
		if(b1[a])continue;
		if(a1[a]) {
			if(!a2[a])a2[a]=i-a1[a];
			else if(a2[a]!=i-a1[a])
			{b1[a]=1;--o;}
		}
		else ++o;
		a1[a]=i;
	}
	printf("%d\n",o);
	for(int i=1;i<100001;++i)
	if(a1[i]&&!b1[i])
		printf("%d %d\n",i,a2[i]);
}
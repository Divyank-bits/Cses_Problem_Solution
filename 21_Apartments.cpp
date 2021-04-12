#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ld long double

const int max=2e5;


signed main()
{
	int t;
	int n,m,k;
	cin>>n>>m>>k;

	int app[n],apr[m];
	for(int i=0;i<n;i++)
	{
		cin>>t;
		app[i]=t;
	}
	for(int i=0;i<n;i++)
	{
		cin>>t;
		apr[i]=t;
	}
	sort(app,app+n);
	sort(apr,apr+m);
	int count=0;

	for(int i=0,j=0;i<n;i++) {
		while(j<m&&apr[j]<app[i]-k)
			j++;
		if(j<m&&apr[j]<=app[i]+k) {
			j++;
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
		


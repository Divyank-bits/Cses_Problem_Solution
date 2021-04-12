#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ld long doulbe

const int max=2e5;


signed main()
{
	int t=0;
	int n,m;
	cin>>n>>m;
	multiset<int> tickets;
	for(int i=0;i<n;i++) {
		cin>>t;
		tickets.insert(t);
	}

	for(int i=0;i<m;i++) {
		cin>>t;
		auto it = tickets.upper_bound(t);
		if(it==tickets.begin())
			cout<<"-1"<<endl;
		else {

			cout<<*(--it)<<endl;
			tickets.erase(it);
		}
	}

	return 0;
}







































// int tp[n],cp[m];
	// for(int i=0;i<n;i++)
	// {
	// 	cin>>t;
	// 	tp[i]=t;
	// }
	
	// for(int i=0;i<m;i++)
	// {
	// 	cin>>t;
	// 	cp[i]=t;
	// }

	// sort(tp , tp+n);
	

	// for(int i=0, j=0;i<n;++i)
	// {
	// 	while(j<m && tp[i]>cp[i])
	// 		j++;
	// 	if(j<m && tp[i]<=cp[i])
	// 	{
	// 		cout<<tp[i]<<endl;
	// 		j++;
	// 	}
	// 	else 
	// 		cout<<-1;
	// }
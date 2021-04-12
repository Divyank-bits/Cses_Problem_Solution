#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ld long double

signed main()
{
	int n;
	cin>>n;
	int ans =0;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		int z = max(a,b);
		if(z==b)
		{
			if(z%2==0)
				ans=(z-1)*(z-1)+a;
			else
			{
				ans = z*z+1-a;
			}
		}
		if(z==a)
		{
			if(z%2==0)
				ans=z*z+1-b;
			else
				ans=(z-1)*(z-1)+b;
		}

		cout<<ans<<" ";
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

int main()
{
	string s;
	cin>>s;
	int ans=0,count=0;
	char c='A';
	for(char d:s)
	{	
		if(d==c)
		{
			count++;
			ans = max (count,ans);
		}
		else 
		{
			c=d;
			count=1;
		}
	}
	cout<<ans;
	return 0;
}
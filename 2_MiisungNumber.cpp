#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

int main()
{
	ll n,sum=0;
	cin >> n;
	
	for(int i=0;i<n-1;i++)
	{
		int a;
		cin >> a;
		sum+=a;
	}

	cout<< n*(n+1)/2-sum;
	return 0;
}
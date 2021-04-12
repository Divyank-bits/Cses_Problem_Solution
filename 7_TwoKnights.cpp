#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

int main()
{
	int n;
	cin>>n;


	for(int i=1;i<=n;i++)
	{
		ll a1=i*i;
		ll a2=a1*(a1-1)/2;
	
		if(i>=1)
			cout<<a2-(4*(i-1)*(i-2))<<endl;
		

	}
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

const int max=2e5;


int main()
{
	int t,ans=0;
	int n,x;
	cin>>n>>x;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>t;
		arr[i]=t;
	}

	sort(arr,arr+n);

	for(int i=0,j=n-1;i<=j;)
	{
		if(arr[i]+arr[j]<=x)
		{	
			i++;
			j--;
			ans++;	
		}	
		else
		{
			j--;
			ans++;
		}
	}

	cout<<ans;
	return 0;
}



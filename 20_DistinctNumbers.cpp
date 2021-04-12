#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double

int main()
{
	int n;
	cin>>n;
	set<int> s;

	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		s.insert(a);
	}
	cout<<s.size();
}
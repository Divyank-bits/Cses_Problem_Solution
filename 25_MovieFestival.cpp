#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long doulbe
#define vi vector<int>
#define vip vector<pair<int,int>>
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()

const int maxsize=2e5;

int main() {

	int n;
	cin>>n;
	vip v;
	for(int i=0;i<n;i++) {
		int j,k;
		cin>>j>>k;
		v.pb({j,1});
		v.pb({k,-1});
	}
	
	sort(all(v));
	int sum = 0;
	int ans = 0;
	for (auto x : v) {
		sum += x.s;
		ans = max(ans,sum);
	}
	cout << ans << '\n';
	return 0;
}
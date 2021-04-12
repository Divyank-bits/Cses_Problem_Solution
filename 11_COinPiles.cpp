#include <bits/stdc++.h>
using namespace std;  

#define int long long
#define float long double
#define mod (int)(1e9+7)
void canbeemptied(int a,int b)
{
    if(max(a,b)>2*min(a,b))
    {
        cout<<"NO\n";
        return;
    }    
    if((a+b)%3==0)
    {
        cout<<"YES\n";
        return;
    }
    else 
        cout<<"NO\n";
}

signed main()
{
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][2];       
    }
    for(int i=0;i<n;i++)
        canbeemptied(arr[i][0],arr[i][2]);

    return 0;
}
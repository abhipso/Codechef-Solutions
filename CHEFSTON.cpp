#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}
		ll ans=LONG_MIN;
		for (int i = 0; i < n; ++i)
		{
			ans=max(ans,(b[i]*(k/a[i])));
		}
		printf("%lld\n",ans );
	}
	return 0;
}
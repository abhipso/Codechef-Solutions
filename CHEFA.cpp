#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n, greater<ll>());
		ll i=0;
		ll ans=0;
		while(i<n)
		{
			ans+=a[i];
			i+=2;
		}
		printf("%lld\n",ans );
	}
	return 0;
}
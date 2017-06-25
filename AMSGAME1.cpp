#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		ll ans=a[0];
		for (int i = 1; i < n; ++i)
		{
			ans=__gcd(a[i],ans);
		}
		printf("%lld\n",ans );
	}
	return 0;
}
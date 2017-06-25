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
		string s;
		cin>>s;
		ll oc=0;
		for (int i = 0; i < n; ++i)
		{
			if (s[i]=='1')
			{
				oc++;
			}
		}
		ll ans=(oc*(oc-(ll)1)/(ll)2)+oc;
		printf("%lld\n", ans );
	}
	return 0;
}
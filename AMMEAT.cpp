#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		ll m;
		cin>>n>>m;
		ll a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+n,greater<ll>());
		ll sum=0;
		bool done=false;
		for (int i = 0; i < n; ++i)
		{
			sum+=a[i];
			if (sum>=m)
			{
				printf("%d\n",i+1 );
				done = true;
				break;
			}
		}
		if (!done)
		{
			printf("-1\n");
		}
	}
	return 0;
}
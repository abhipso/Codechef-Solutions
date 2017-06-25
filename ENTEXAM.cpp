#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,e,m;
		cin>>n>>k>>e>>m;
		ll stdsum[n];
		memset(stdsum,0,sizeof(stdsum));
		for (ll  i = 0; i < n-1; ++i)
		{
			for (ll  j = 0; j < e; ++j)
			{
				ll  tmp;
				cin>>tmp;
				stdsum[i]+=(tmp);
			}
		}
		sort(stdsum,stdsum+n-1,greater<ll>());
		ll serg=0;
		for (ll  i = 0; i < e-1; ++i)
		{
			ll  tmp;
			cin>>tmp;
			serg+=(tmp);
		}
		ll  ans=(stdsum[k-1]-serg)+1;
		if (ans<0)
		{
			printf("0\n");
		}
		else if (ans>m)
		{
			printf("Impossible\n");
		}
		else
			printf("%d\n",ans );
	}
	return 0;
}
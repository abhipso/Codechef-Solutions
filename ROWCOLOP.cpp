#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,t;
	cin>>n>>t;
	ll row[n],col[n];
	memset(row,0,sizeof(row));
	memset(col,0,sizeof(col));
	while(t--)
	{
		string s;
		cin>>s;
		ll x,y;
		cin>>x>>y;
		if (s=="RowAdd")
		{
			row[x]+=y;
		}
		if (s=="ColAdd")
		{
			col[x]+=y;
		}
	}
	ll mar=INT_MIN;
	ll mac=INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		mar=max(mar,row[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		mac=max(mac,col[i]);
	}
	printf("%lld\n",mar+mac );

	return 0;
}
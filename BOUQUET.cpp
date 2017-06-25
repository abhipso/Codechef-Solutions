#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll x[3],y[3],z[3];
		for (int i = 0; i < 3; ++i)
		{
			cin>>x[i];
		}
		for (int i = 0; i < 3; ++i)
		{
			cin>>y[i];
		}
		for (int i = 0; i < 3; ++i)
		{
			cin>>z[i];
		}
		ll a= x[0]+y[0]+z[0];
		ll b= x[1]+y[1]+z[1];
		ll c= x[2]+y[2]+z[2];
		ll d= x[0]+x[1]+x[2];
		ll e= y[0]+y[1]+y[2];
		ll f= z[0]+z[1]+z[2];
		ll ans=max(a,max(b,max(c,max(d,max(e,f)))));
		if (ans%2==0&&ans!=0)
		{
			ans--;
		}
		cout<<ans<<"\n";
	}
	return 0;
} 
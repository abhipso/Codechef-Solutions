#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p,q,r;
		scanf("%d %d %d",&p,&q,&r);
		ll a[p],b[q],c[r];
		for (int i = 0; i < p; ++i)
			scanf("%lld",a+i);
		for (int i = 0; i < q; ++i)
			scanf("%lld",b+i);
		for (int i = 0; i < r; ++i)
			scanf("%lld",c+i);
		sort(a,a+p);
		sort(b,b+q);
		sort(c,c+r);
		ll cuma[p],cumc[r];
		ll sum = 0;
		for (int i = 0; i < p; ++i)
		{
			sum=(sum+a[i])%MOD;
			cuma[i]=sum;
		}
		sum = 0;
		cuma[-1] = 0;
		cumc[-1] = 0;
		for (int i = 0; i < r; ++i)
		{
			sum=(sum+c[i])%MOD;
			cumc[i]=sum;
		}
		ll ans = 0;
		for (int i = 0; i < q; ++i)
		{
			ll y = b[i];
			ll lena = upper_bound(a,a+p,b[i]) -a;
			ll lenc = upper_bound(c,c+r,b[i]) -c;
			ans = (ans + (((lena*lenc)%MOD)*((y*y)%MOD) )%MOD)%MOD;
			ans = (ans + (y* ( (cuma[lena - 1]*lenc)%MOD + (cumc[lenc - 1]*lena)%MOD )%MOD )%MOD)%MOD;
			ans = (ans +(cuma[lena - 1] *cumc[lenc - 1])%MOD)%MOD;
		}
		printf("%lld\n", ans);
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TOMOD 1000000007
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a[3];
		for (int i = 0; i < 3; ++i)
		{
			cin>>a[i];
		}
 
		sort(a,a+3);
		a[0]=a[0]%TOMOD;
		a[1]=(a[1]-1+TOMOD)%TOMOD;
		a[2]=(a[2]-2+TOMOD)%TOMOD;
		ll ans=(a[0]*a[1])%TOMOD;
		ans=(ans*a[2])%TOMOD;
 
		printf("%lld\n",ans );
	}
	return 0;
}
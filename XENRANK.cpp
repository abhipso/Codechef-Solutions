#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		ll n=x+y;
		ll ans = (1+n)*(n)/2;
		ans +=x+1;
		printf("%lld\n", ans);
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,k;
	cin>>n>>k;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	ll target=*max_element(a,a+n);
	if (k==0)
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%lld ",a[i] );
		}
		printf("\n");
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		a[i]=target-a[i];
	}
	if (k%2)
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%lld ",a[i] );
		}
		printf("\n");
	}
	else
	{
		ll target=*max_element(a,a+n);
		for (int i = 0; i < n; ++i)
		{
			a[i]=target-a[i];
		}	
		for (int i = 0; i < n; ++i)
		{
			printf("%lld ",a[i] );
		}
		printf("\n");
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		int ans=0;
		for (int i = 1; i < n - 1 ; ++i)
		{
			if ((a[i]!=a[i-1]) || (a[i] != a[i+1]))
			{
				ans++;
			}
		}
		if (a[0]!=a[1])
		{
			ans++;
		}
		if ((a[n-1] != a[n-2]))
		{
			ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
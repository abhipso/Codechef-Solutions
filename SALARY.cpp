#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int minsal=INT_MAX;
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			minsal=min(a[i],minsal);
		}
		int ans=0;
		for (int i = 0; i < n; ++i)
		{
			ans+=(a[i]-minsal);
		}
		printf("%d\n",ans );
	}
	return 0;
}
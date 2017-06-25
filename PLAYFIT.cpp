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
		int ans=0, curr_min=a[0];
		for (int i = 0; i < n; ++i)
		{
			curr_min=min(curr_min, a[i]);
			ans=max(a[i]-curr_min,ans);
		}
		if (ans==0)
		{
			printf("UNFIT\n");
		}
		else
			printf("%d\n", ans);
	}
	return 0;
}
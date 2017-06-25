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
		int ans = INT_MIN;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			ans = max(a[i],ans);
		}
		printf("%d\n", n - ans);
	}
	return 0;
}
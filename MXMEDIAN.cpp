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
		int a[2*n];
		int per[2*n];
		for (int i = 0; i < 2 * n; ++i)
		{
			cin>>a[i];
		}
		sort(a,a+2*n);
		int ans = a[n+n/2];
		for (int i = 0; i < n; i++)
		{
			per[2*i] = a[2*n-i-1];
			per[1 + 2*i] = a[i];
		}
		printf("%d\n", ans);
		for (int i = 0; i < 2*n; ++i)
		{
			printf("%d ",per[i] );
		}
		printf("\n");
	}
	return 0;
}
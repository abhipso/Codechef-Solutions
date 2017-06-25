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
		sort(a,a+n);
		int ans=0;
		for (int i = 1; i < n; ++i)
		{
			if (a[i-1]+1!=a[i])
			{
				if (i==1)
				{
					ans=a[0];
				}
				else
					ans=a[i];
			}
		}
		printf("%d\n",ans );
	}
	return 0;
}
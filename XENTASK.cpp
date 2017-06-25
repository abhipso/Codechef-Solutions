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
		long long a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}
		long long ans1=0,ans2=0;
		for (int i = 0; i < n; ++i)
		{
			if ((i%2)==0)
			{
				ans1+=a[i];
				ans2+=b[i];
			}
			else
			{
				ans1+=b[i];
				ans2+=a[i];
			}
		}
		printf("%lld\n",min(ans2,ans1) );
	}
	return 0;
}
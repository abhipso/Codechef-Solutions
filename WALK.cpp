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
		for (int i = n-1; i >= 0; --i)
		{
			ans=max(ans+1,a[i]);
		}
 
		printf("%d\n",ans );
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		k=min(k,n-k);
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		int sum2=0;
		for (int i = 0; i < k; ++i)
		{
			sum2+=a[i];
		}
		printf("%d\n",sum-2*sum2 );
	}
	return 0;
}
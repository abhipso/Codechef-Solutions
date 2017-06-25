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
		int ct=0;
		for (int i = 0; i < n*n; ++i)
		{
			int tmp;
			cin>>tmp;
			ct+=tmp;
		}
		int limit=n;
		int itr=0;
		while(limit<=n*n)
		{
			if (ct<=limit)
			{
				break;
			}
			limit+=(2*(n-itr-1));
			itr++;
		}
		printf("%d\n", itr);
	}
	return 0;
}
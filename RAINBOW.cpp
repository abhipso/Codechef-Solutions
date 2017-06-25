#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>a[i][j];
			}
		}
		unordered_set<int> discarded;
		int oldsize=INT_MAX;
		unordered_set<int> valids;
		for (int kk = 0; kk < n; ++kk)
		{
			for (int i = 0; i < n; ++i)
			{
				set<int> tmpst;
				for (int j = 0; j < n; ++j)
				{
					if (j!=i)
					{
						if (discarded.find(j)==discarded.end())
						{
 
							tmpst.insert(a[i][j]);
						}
					}
				}
				if (tmpst.size()<=1)
				{
					discarded.insert(i);
				}
			}
			if (discarded.size()==oldsize)
			{
				break;
			}
			oldsize=discarded.size();
		}
		int ans=0;
		for (int i = 0; i < n; ++i)
		{
			if (discarded.find(i)==discarded.end())
			{
				ans++;
			}
		}
		printf("%d\n",ans );
	}
	return 0;
}
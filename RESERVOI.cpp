#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>n>>m;
		for (int i = 0; i < 1004; ++i)
		{
			for (int j = 0; j < 1004; ++j)
			{
				a[i][j]=0;
			}
		}
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				char tmp;
				cin>>tmp;
				if (tmp=='A')
				{
					a[i][j]=0;
				}
				if (tmp=='W')
				{
					a[i][j]=1;
				}
				if (tmp=='B')
				{
					a[i][j]=2;
				}
			}
		}
		bool stable=true;
		for (int j = 1; j <= m; ++j)
		{
			for (int i = 1; i <= n-1; ++i)
			{
				if (a[i+1][j]<a[i][j])
				{
					stable=false;
				}
			}
		}
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= m; ++j)
			{
				if (a[i][j]==1)
				{
					if ((a[i][j+1]==0)||(a[i][j-1]==0))
					{
						stable=false;
					}
				}
			}
		}
		cout<<(stable?"yes":"no")<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		vector<int> a[n];
		std::vector<int> sum(n);
		for (int i = 0; i < n; ++i)
		{
			int len;
			scanf("%d",&len);
			while(len--)
			{
				int tmp;
				scanf("%d",&tmp);
				a[i].push_back(tmp);
				sum[i]+=tmp;
			}
			sort(a[i].begin(),a[i].end());
		}
		int targetsum = k*(k+1)/2;
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				if (a[i].size()+a[j].size()>=k)
				{
					if (((*a[i].begin() == 1) || (*a[j].begin() == 1)) && ((*a[i].rbegin() == k)||(*a[j].rbegin() == k)) && (sum[i]+sum[j]>=targetsum) )
					{
						bool take = true;
						int ptra = 0;
						int ptrb = 0;
						int current = 1;
						while(current<=k)
						{
							if (ptra == a[i].size())
							{
								bool check = true;
								while(ptrb!=a[j].size())
								{
									if (a[j][ptrb] == current)
									{
										ptrb++;
										current++;
									}
									else
									{
										check = false;
										break;
									}
								}
								if (!check)
								{
									break;
								}
							}
							else if (ptrb == a[j].size())
							{
								bool check = true;
								while(ptra!=a[i].size())
								{
									if (a[i][ptra] == current)
									{
										ptra++;
										current++;
									}
									else
									{
										check = false;
										break;
									}
								}
								if (!check)
								{
									break;
								}
							}
							else if ((a[i][ptra]==current) && (a[j][ptrb]==current))
							{
								current++;
								ptra++;
								ptrb++;
							}
							else if ((a[i][ptra] == current) && (a[j][ptrb] > current))
							{
								current++;
								ptra++;
							}
							else if ((a[i][ptra] > current) && (a[j][ptrb] == current))
							{
								current++;
								ptrb++;
							}
							else
								break;
							if (current==k+1)
							{
								ans++;
								break;
							}
						}
					}
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		std::vector<int> v;
		unordered_set<int> b;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		for (int i = 0; i < m; ++i)
		{
			int tmp;
			cin>>tmp;
			b.insert(tmp);
		}
		int ans=0;
		for (int i = 0; i < n; ++i)
		{
			if (b.find(v[i])!=b.end())
			{
				ans++;
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}
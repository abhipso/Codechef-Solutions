#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	unordered_set<int> visited;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		a[i]--;
	}
	int count=0;
	std::vector<std::vector<int> > ans;
	while(count<n)
	{
		std::vector<int> v;
		int idx=0;
		while(visited.find(idx)!=visited.end())
		{
			idx++;
		}
		v.push_back(idx+1);
		visited.insert(idx);
		while(visited.find( a[idx])==visited.end())
		{
			if (count==n)
			{
				break;
			}
			v.push_back(a[idx]+1);
			visited.insert(a[idx]);
			count++;
			idx=a[idx];
		}
		v.push_back(v[0]);
		ans.push_back(v);
		count++;
	}
	printf("%d\n",ans.size() );
	for (int i = 0; i < ans.size(); ++i)
	{
		for (int j = 0; j < ans[i].size(); ++j)
		{
			printf("%d ",ans[i][j] );
		}
		printf("\n");
	}
	return 0;
}
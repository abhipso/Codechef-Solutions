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
		int r = n;
		std::vector<pair<int,int>> v;
		for (int i = 1; i < n; ++i)
		{
			v.push_back(make_pair(i,i+1));
		}
		v.push_back(make_pair(1,n));
 
		printf("%d\n",r);
		for (int itr = 0; itr< r; ++itr)
		{
			printf("%d\n", n);
			for (int i = 1; i <= n; ++i)
			{
				printf("%d ",i );
				printf("%d %d\n", v[itr].first,v[itr].second);
			}
		}
 
	}
	return 0;
}
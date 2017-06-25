#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int tc=1;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<int> a,b;
		for (int i = 0; i < n; ++i)
		{
			int k;
			cin>>k;
			int x=(k%(1<<16));
			int y=(k/(1<<16));
			a.push_back(x);
			b.push_back(y);
		}
		printf("Case %d:\n",tc );
		for (int i = 0; i < a.size(); ++i)
		{
			printf("%d ",a[i] );
		}
		printf("\n");
		for (int i = 0; i < b.size(); ++i)
		{
			printf("%d ",b[i] );
		}
		printf("\n");
		tc++;
	}
	return 0;
}
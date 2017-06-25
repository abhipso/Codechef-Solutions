#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int orderes[m];
		for (int i = 0; i < m; ++i)
		{
			cin>>orderes[i];
		}
		int small=*min_element(orderes,orderes+m);
		int big=*max_element(orderes,orderes+m);
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", max(abs(small-i),abs(big-i)));
		}
		printf("\n");
	}
	return 0;
}
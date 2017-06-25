#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double d,u;
		int n;
		cin>>d>>u>>n;
		double val = 123465678;
		int ansidx = -1;
		for (int i = 0; i < n; ++i)
		{
			double m,r,c;
			cin>>m>>r>>c;
			double curr_val = r*u + c/m;
			if (curr_val < val)
			{
				ansidx = i;
				val = curr_val;
			}
		}
		if (val < d*u)
		{
			printf("%d\n", ansidx + 1);
		}
		else 
			printf("0\n");
	}
	return 0;
} 
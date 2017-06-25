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
		bool failed=false;
		bool full=false;
		int total=0;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin>>tmp;
			total+=tmp;
			if (tmp<=2)
			{
				failed=true;
			}
			if (tmp==5)
			{
				full=true;
			}
		}
		int avg=total/n;
		if (failed)
		{
			printf("No\n");
			continue;
		}
		if ((full)&&(avg>=4))
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	return 0;
}
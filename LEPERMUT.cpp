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
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		bool good=true;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+2; j < n; ++j)
			{
				if (a[i]>a[j])
				{
					good=false;
				}
			}
			if (!good)
			{
				break;
			}
		}
		if (good)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}
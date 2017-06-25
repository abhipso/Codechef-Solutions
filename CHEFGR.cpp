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
		int a[n];
		int curr_max=INT_MIN;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			curr_max=max(a[i],curr_max);
		}
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			sum+=(curr_max-a[i]);
		}
		if (sum==m)
		{
			printf("Yes\n");
		}
		else if (((m-sum)%n)==0)
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	return 0;
}
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
		sort(a,a+n);
		for (int i = 0; i <= (n/2); ++i)
		{
			printf("%d ", a[i]);
			if (n-1-i>n/2)
			{
				printf("%d ", a[n-1-i]);
			}
		}
		printf("\n");
	}
	return 0;
}
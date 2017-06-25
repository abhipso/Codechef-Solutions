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
		int k;
		cin>>k;
		k=a[k-1];
		sort(a,a+n);
		for (int i = 0; i < n; ++i)
		{
			if (a[i]==k)
			{
				printf("%d\n", i+1);
				break;
			}
		}
		
	}
	return 0;
}
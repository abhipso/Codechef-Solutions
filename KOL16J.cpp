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
		int a[n],c[501];
		memset(c,0,sizeof(c));
		int maxi=INT_MIN;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if (a[i]>maxi)
			{
				maxi=a[i];
			}
			c[a[i]]++;
		}
		bool possible=true;
		bool possible2=false;
		for (int i = 1; i < n; ++i)
		{
			if ((1+a[i-1])!=a[i])
			{
				possible2=true;
			}
		}
		for (int i = 1; i <= maxi; ++i)
		{
			if (c[i]!=1)
			{
				possible=false;
			}
		}
		if (possible&&possible2)
		{
			printf("yes\n");
		}
		else
			printf("no\n");
	}
	return 0;
}
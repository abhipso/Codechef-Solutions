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
		int all=1<n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		bool found=false;
		for (int kk = 1; kk<= (int)(pow(2,n)+.01); ++kk)
		{
			int curr=kk;
			int tab[n];
			for (int i = 0; i < n; ++i)
			{
				tab[i]=curr%2;
				curr/=2;
			}
			int sum=0;
			for (int i = 0; i < n; ++i)
			{
				sum+=((tab[i])*(a[i]));
			}
			if (sum==m)
			{
				found=true;
				break;
			}
		}
		if (found)
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	return 0;
}
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
		sort(a,a+n,greater<int>());
		int flag=4;
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			if (flag>2)
			{
				sum+=a[i];
			}
			flag--;
			if (flag==0)
			{
				flag=4;
			}
		}
		printf("%d\n",sum );
	}
	return 0;
}
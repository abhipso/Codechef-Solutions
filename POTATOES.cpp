#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	bool a[10000];
	memset(a,false,sizeof(a));
	for (int i = 2; i < 10000; ++i)
	{
		if (a[i]==false)
		{
			for (int j = i+i; j < 10000; j+=(i))
			{
				a[j]=true;
			}
		}
	}
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		for (int i = 1; i < 10000; ++i)
		{
			if (a[i+x+y]==false)
			{
				printf("%d\n",i );
				break;
			}
		}
	}
	return 0;
}
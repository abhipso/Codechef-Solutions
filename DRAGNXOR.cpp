#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		int x=0,y=0;
		while(a>0)
		{
			x+=(a%2);
			a/=2;
		}
		while(b>0)
		{
			y+=(b%2);
			b/=2;
		}
		int curmax=x+y;
		if (x+y>n)
		{
			curmax=n-curmax+n;
		}
		int ans=(1<<curmax)-1;
		for (int i = 0; i < n-curmax; ++i)
		{
			ans*=2;
		}
		printf("%d\n",ans );
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if (c>=(a+b))
		{
			printf("%d\n", c-(a+b));
		}
		else if (c>=(max(a,b))-min(a,b))
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", max(a,b) - c - min(a,b) );
		}
	}
	return 0;
}
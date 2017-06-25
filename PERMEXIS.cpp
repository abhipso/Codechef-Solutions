#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		bool flag=true;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n-1; ++i)
		{
			ll dff= a[i+1]-a[i];
			if (dff<0)
			{
				dff*=(-1);
			}
			if (dff>1)
			{
				flag=false;
			}
		}
		if (flag)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");	
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int ans=0;
	for (int i = 0; i < n; i+=2)
	{
		if (abs((a[i]-a[i+1]))<=d)
		{
			ans++;
		}
		else 
		{
			i--;
		}
	}
	printf("%d\n",ans );
	
	return 0;
}
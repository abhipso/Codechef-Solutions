#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n], sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		sum+= a[i];
	}
	int ans = 0;
	if (sum >= (2 * n))
	{
		ans = (sum+1)/2;
	}
	else
	{
		ans = n;
	}
	printf("%d\n", ans);

	return 0;
}
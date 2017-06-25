#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int j = 0; j < n; ++j)
	{
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		sort(a,a+n);
		for (int i = 0; i < n; ++i)
			printf("%d ",a[i] );
		printf("\n");
	}
	return 0;
}
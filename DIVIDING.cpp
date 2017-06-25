#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long sum=0;
	for (int i = 0; i < n; ++i)
	{
		long long tmp;
		cin>>tmp;
		sum+=tmp;
	}
	if (n*(n+1)==2*sum)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}
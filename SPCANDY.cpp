#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		if (n==0)
		{
			printf("0 0\n");
		}
		else if (k==0)
		{
			printf("0 %llu\n", n );
		}
		else
			printf("%llu %llu\n",n/k,n%k );
	}
	return 0;
}
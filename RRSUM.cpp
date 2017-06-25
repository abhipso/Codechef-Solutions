#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m;
	cin>>n>>m;
	while(m--)
	{
		long long num;
		cin>>num;
		if (num<=n+1||num>3*n)
		{
			printf("0\n");
		}
		else
		{
			num-=n;
			if (num<=n)
			{
				printf("%lld\n", num-1);
			}
			else
			{
				num=2*n-num;
				printf("%lld\n", num+1);
			}
		}
	}
	return 0;
}
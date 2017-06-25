#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int evenCount=0;
		int tmp;
		for (int i = 0; i < n; ++i)
		{
			cin>>tmp;
			if (tmp%2==0)
			{
				evenCount++;
			}
		}
		if (k==0&&evenCount==n)
		{
			printf("NO\n");
		}
		else if (evenCount>=k)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
 
 
 
	return 0;
} 
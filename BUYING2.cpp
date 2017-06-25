#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int mini=INT_MAX;
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin>>tmp;
			mini=min(tmp,mini);
			sum+=tmp;
		}
		if ((sum/x)==((sum-mini)/x))
		{
			printf("-1\n");
		}
		else
		{
			printf("%d\n",sum/x );
		}
	}
	return 0;
}
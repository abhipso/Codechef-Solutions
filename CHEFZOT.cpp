#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans=0,count=0;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin>>tmp;
		if (tmp==0)
		{
			count=0;
		}
		else count++;
		ans=max(ans,count);
	}
	printf("%d\n",ans );
	return 0;
}
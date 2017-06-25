#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	int mini=INT_MAX;
	int maxi=INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		int tmp;
		cin>>tmp;
		mini=min(mini,tmp);
		maxi=max(maxi,tmp);
	}
	while(t--)
	{
		int target;
		cin>>target;
		if ((target<=maxi)&&(target>=mini))
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	return 0;
}
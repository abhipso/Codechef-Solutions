#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	int n,even=0,odd=0;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i]%2==0)
		{
			even++;
		}
		else
			odd++;
	}
	if (even>odd)
	{
		printf("READY FOR BATTLE" );
	}
	else
		printf("NOT READY");
 
	return 0;
}
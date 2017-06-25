#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,n,k;
	cin>>a>>n>>k;
	int zz=a;
	for (int i = 0; i < k; ++i)
	{
		printf("%d ",zz%(n+1) );
		zz/=(n+1);
	}
	return 0;
}
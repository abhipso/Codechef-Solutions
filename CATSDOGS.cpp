#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll c,d,l;
		cin>>c>>d>>l;
		if ((l%4==0)&&(l<=(c+d)*4)&&(l>=((c>2*d)?(4*(c-d)):(d*4))))
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}
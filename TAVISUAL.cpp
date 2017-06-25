#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c,q;
		cin>>n>>c>>q;
		while(q--)
		{
			int l,r;
			cin>>l>>r;
			if (c>=l&&c<=r)
			{
				c=r-(c-l);
			}
		}
		printf("%d\n",c );
	}
	return 0;
}
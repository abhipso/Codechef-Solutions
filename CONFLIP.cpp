#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g;
		cin>>g;
		while(g--)
		{
			int i,n,q;
			cin>>i>>n>>q;
			if (n%2)
			{
				if (i==q)
				{
					printf("%d\n",n-1-(n/2 ));	
				}
				else
					printf("%d\n",1+(n/2 ));
			}
			else
			{
				printf("%d\n",n/2 );
			}
		}
	}
 
	return 0;
}
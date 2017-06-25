#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int m,n,c;
		scanf("%d %d %d",&m,&n,&c);
		int itr=c,cnt=0;
		while(itr--)
		{
			itr++;
			if (c%itr == 0 )
			{
				if (c/itr<=m && itr<=n)
				{
					cnt++;
				}
			}
			itr--;
		}
		printf("%d\n",cnt );
 
	}
	return 0;
}
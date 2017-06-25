#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		bool finecount=false;
		int ans=0;
		for(int i=0;i<n;i++)
		{
			int curr;
			cin>>curr;
			if (curr==0)
			{
				finecount=true;
			}
			if (finecount&&(curr==0))
			{
				ans+=(1100);
			}
			else if (finecount&&(curr==1))
			{
				ans+=100;
			}
		}
		printf("%d\n",ans );
 
	}
	return 0;
}
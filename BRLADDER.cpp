#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if (abs(b-a)==1)
		{
			if (min(a,b)%2)
			{
				printf("YES\n");				
			}
			else
				printf("NO\n");
		}
		else if (abs(b-a)==2)
		{
			printf("YES\n");
 
		}
		else
			printf("NO\n");
			
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[100001];
		int c1=0,c2=0;
		scanf("%s",a);
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]=='0')
				c1++;
			if(a[i]=='1')
				c2++;
		}
		if(c1==1 || c2==1)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
		
	}
	return 0;
}
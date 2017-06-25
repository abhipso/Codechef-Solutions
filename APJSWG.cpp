#include <bits/stdc++.h>
using namespace std;
#define ll long long
void swap(int *a,int*b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for (int i = 1; i <= n; ++i)
		{
			cin>>a[i];
		}
		ll count=0;
		bool flag=true;
		for (int i = 1; i <= n; ++i)
		{
			if (a[i]>i)
			{
				if ((a[i]-i)>2)
				{
					flag=false;
					break;
				}
			}
		}
		int sccc=20;	
		while(sccc!=0)
		{
			sccc=0;
			for (int i = 2; i <= n; ++i)
			{
				if (a[i]<a[i-1])
				{
					sccc++;
					count++;
					swap(a+i,a+i-1);
				}
			}
			
		}
		if (flag)
		{
			printf("%lld\n",count );
		}
		else
			printf("Not Allowed\n");
	}
 
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n>>c;
		string a[n];
		string b[c];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				if ((a[i][j]>='A')&&(a[i][j]<='Z'))
				{
					a[i][j]=a[i][j]-'A'+'a';
				}
			}
		}
		for (int i = 0; i < c; ++i)
		{
			b[i]="";
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				b[j]+=a[i][j];
			}
		}
		bool exists=false;
 
		for (int i = 0; i < c; ++i)
		{
			if (b[i].find("spoon")!=string::npos)
			{
				exists=true;
			}
		}
		for (int i = 0; i < n; ++i)
		{
			if (a[i].find("spoon")!=string::npos)
			{
				exists=true;
			}
		}
		if (exists)
		{
			printf("There is a spoon!\n");
		}
		else
			printf("There is indeed no spoon!\n");
	}
	return 0;
}
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
		string directions[n];
		for (int i = 0; i < n; ++i)
		{
			ws(cin);
			getline(cin,directions[i]);
		}
		for (int i = 0; i < n-1; ++i)
		{
			if (directions[i+1].find("Right",0)==0)
			{
				if (i==0)
				{
					directions[i].replace(0 , 5, "Left");
				}
				else
				{
					if (directions[i].find("Right",0)==0)
					{
						directions[i].replace(0 , 5, "Left");
					}
				}
			}
			if (directions[i+1].find("Left",0)==0)
			{
				if (i==0)
				{
					directions[i].replace(0 , 5, "Right");
				}
				else
				{
					if (directions[i].find("Left",0)==0)
					{
						directions[i].replace(0 , 4, "Right");
					}
				}
			}
		}
		if (directions[n-1].find("Right",0)==0)
		{
			directions[n-1].replace(0,5,"Begin");
		}
		else if (directions[n-1].find("Left",0)==0)
		{
			directions[n-1].replace(0,4,"Begin");
		} 
		for (int i = n-1; i >= 0; --i)
		{
			printf("%s\n",directions[i].c_str() );
		}
	}
	return 0;
}
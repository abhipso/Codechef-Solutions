#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int hreo=0;
		int vill=0;
		int i;
		bool done=false;
		int finalans=0;
		for (i = 0; i < n; ++i)
		{
			string s;
			cin>>s;
			if (s.length()>=3)
			{
				if ((s[s.length()-1]=='n')&&(s[s.length()-2]=='a')&&(s[s.length()-3]=='m'))
				{
					hreo++;
				}
				else
				{
					vill++;
				}
			}
			else
			{
				vill++;
			}
			if ((hreo-vill>=2)&&(finalans==0))
			{
				finalans=1;
			}
			else if ((vill-hreo>=3)&&(finalans==0))
			{
				finalans=2;
			}
		}
		if (finalans==1)
		{
			printf("superheroes\n");
		}
		if (finalans==2)
		{
				printf("villains\n");
		}
		if (finalans==0)
		{
			printf("draw\n");
		}
	} 
	return 0;
}
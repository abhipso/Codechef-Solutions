#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		int ps=0;
		int ud=0;
		bool safe=true;
		int hps=0,lps=0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i]=='L')
			{
				ps--;		
			}	
			if (s[i]=='R')
			{
				ps++;		
			}
			if (ps>hps)
			{
				hps=ps;
			}
			if (ps<lps)
			{
				lps=ps;
			}
		}
		if (hps+abs(lps)>m-1)
		{
			safe=false;
		}
		ps=0;
		ud=0;
		hps=0,lps=0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i]=='U')
			{
				ps++;		
			}	
			if (s[i]=='D')
			{
				ps--;		
			}
			if (ps>hps)
			{
				hps=ps;
			}
			if (ps<lps)
			{
				lps=ps;
			}
		}
		if (hps+abs(lps)>n-1)
		{
			safe=false;
		}
		if (abs(hps)>n-1)
		{
			safe=false;
		}
		if (safe)
		{
			printf("safe\n");
		}
		else
		{
			printf("unsafe\n");
		}
	}

	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int target=min(s1.length(),s2.length());		
		int p1=0;
		int p2=0;
		int nummatch=0;
		bool  possible=false;
		while(1)
		{
			if (p1==s1.length()||p2==s2.length())
			{
				break;
			}
			if (s1[p1]==s2[p2])
			{
				p1++;
				p2++;
				nummatch++;
			}
			else
			{
				if (s1.length()>s2.length())
				{
					p1++;
				}
				else
					p2++;
			}
			if (nummatch==target)
			{
				possible=true;
				break;
			}
		}
		if (possible)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}
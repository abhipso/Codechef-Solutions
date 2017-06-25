#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int len=0;
		int opened = 0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] == '<')
			{
				opened++;
			}
			else
				opened--;
			if (opened == 0)
			{
 
				len = i;
			}
			if (opened < 0)
			{
				break;
			}
		}
		printf("%d\n", (len != 0)?len + 1:0 );
	}

	return 0;
}
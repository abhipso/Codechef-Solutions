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
		int possible = true;
		bool one = false;
		int flag = 0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (flag ==0)
			{
				if (s[i]=='1')
				{
					flag = 1;
					one = true;
				}
			}
			if (flag == 1)
			{
				if (s[i]=='0')
				{
					flag = 2;
				}
			}
			if (flag == 2)
			{
				if (s[i] == '1')
				{
					possible = false;
				}
			}
		}
		if (possible && one)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}
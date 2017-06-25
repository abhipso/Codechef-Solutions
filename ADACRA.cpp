#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int seg = 0;
		int prev = s[0];
		int i;
		for (i = 1; i < s.length(); ++i)
		{
			if (prev != s[i])
			{
				if (prev == 'D')
				{
					seg++;
				}
			}
			prev = s[i];
		}
		if (s[s.length()-1] == 'D')
		{
			seg++;
		}
		int ans1 = seg;
 
		seg = 0;
		prev = s[0];
		i;
		for (i = 1; i < s.length(); ++i)
		{
			if (prev != s[i])
			{
				if (prev == 'U')
				{
					seg++;
				}
			}
			prev = s[i];
		}
		if (s[s.length()-1] == 'U')
		{
			seg++;
		}
 
		printf("%d\n", min(ans1,seg));
	}
	return 0;
}
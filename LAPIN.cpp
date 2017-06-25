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
		int a[26],b[26];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for (int i = 0; i < s.length()/2; ++i)
		{
			a[s[i]-'a']++;
		}
		int x;
		if (s.length()%2)
		{
			x=1+s.length()/2;
		}
		else
			x=s.length()/2;
		for (int i = x; i < s.length(); ++i)
		{
			b[s[i]-'a']++;
		}
		bool ans=true;
		for (int i = 0; i < 26; ++i)
		{
			if (a[i]!=b[i])
			{
				ans=false;
			}
		}
		if (ans)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}
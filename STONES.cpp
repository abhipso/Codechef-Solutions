#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string s2;
		cin>>s>>s2;
		int ans=0;
		unordered_set<char> jwels;
		for (int i = 0; i < s.length(); ++i)
		{
			jwels.insert(s[i]);
		}
		for (int i = 0; i < s2.length(); ++i)
		{
			if (jwels.find(s2[i])!=jwels.end())
			{
				ans++;
			}
		}
		printf("%d\n",ans );
	}
	return 0;
}
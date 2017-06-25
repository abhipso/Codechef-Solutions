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
		int n;
		cin>>n;
		int parent[26];
		memset(parent, 0, sizeof(parent));
		string name[n];
 
		for (int i = 0; i < s1.length(); ++i)
		{
			parent[s1[i] - 'a']++;
		}
		
		for (int i = 0; i < s2.length(); ++i)
		{
			parent[s2[i] - 'a']++;
		}
 
		int catname[26];
		memset(catname, 0, sizeof(catname));
		for (int i = 0; i < n; ++i)
		{
			string s;
			cin>>s;
 
			for (int i = 0; i < s.size(); ++i)
			{
				catname[s[i] - 'a']++;
			}
		}
		bool possible = true;
		for (int i = 0; i < 26; ++i)
		{
			if (catname[i] > parent[i])
			{
				possible = false;
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
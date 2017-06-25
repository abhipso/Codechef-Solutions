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
		unordered_set<char> st;
		bool possible = true;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] == 'C')
			{
				if ((st.find('E') !=st.end()) ||(st.find('S') !=st.end()))
				{
					possible = false;
					break;
				}
			}
			if (s[i] == 'E')
			{
				if (st.find('S') !=st.end())
				{
					possible = false;
					break;
				}
			}
			st.insert(s[i]);
		}
		if (possible)
		{
			printf("yes\n");
		}
		else
			printf("no\n");
	}
	return 0;
}
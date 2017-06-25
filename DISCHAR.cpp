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
		for (int i = 0; i < s.length(); ++i)
		{
			st.insert(s[i]);
		}
		printf("%d\n", st.size());
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	std::map<string, string> mp;
	while(n--)
	{
		string s1,s2;
		cin>>s1>>s2;
		mp.insert(make_pair(s1,s2));
	}
	while(q--)
	{
		string s;
		cin>>s;
		string tld = "";
		int i;
		for (i = s.length()-1; i >=0 ; --i)
		{
			if (s[i] == '.')
			{
				break;
			}
			tld+=s[i];
		}
		reverse(tld.begin(),tld.end());
		if (i != -1)
		{
			if (mp.find(tld) != mp.end())
			{
				printf("%s\n", mp[tld].c_str());
				continue;
			}
		}
		printf("unknown\n");
	}
	return 0;
}
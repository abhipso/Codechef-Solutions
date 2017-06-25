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
		std::vector<int> v;
		int ct=0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i]=='#')
			{
				if (i!=0)
				{
					v.push_back(ct);
				}
				ct=0;
			}
			else
			{
				ct++;
			}
		}
		int curr=0;
		int days=0;
		for (int i = 0; i < v.size(); ++i)
		{
			if (v[i]>curr)
			{
				curr=v[i];
				days++;
			}
		}
		printf("%d\n", days);
	}
	return 0;
}
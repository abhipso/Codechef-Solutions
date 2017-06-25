#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string s;
	cin>>s;
	int n= s.length();
	reverse(s.begin(),s.end());
	bool found  = false;
	int count = 0;
	char old = '0';
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i]=='1')
		{
			found = true;
		}
		if (found)
		{
			if (old !=s[i])
			{
				count++;
			}
			old = s[i];
		}
	}
	printf("%d\n", count);
	return 0;
}
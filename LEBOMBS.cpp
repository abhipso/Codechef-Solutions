#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int ans=0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (i!=0||i!=s.length()-1)
			{
				if (s[i]=='1'||s[i-1]=='1'||s[i+1]=='1')
				{
					ans++;
				}
			}
			else if (i==0)
			{
				if (s[i]=='1'||s[i+1]=='1')
				{
					ans++;
				}
			}
			else if (i==n-1)
			{
				if (s[i]=='1'||s[i-1]=='1')
				{
					ans++;
				}				
			}
		}
		printf("%d\n", n-ans);
	}
	return 0;
}
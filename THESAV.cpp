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
		bool able=true;
		int count=0;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i]=='*')
			{
				count=2;
			}
			if (s[i]=='0')
			{
				count--;
			}
			if (count<0)
			{
 
				able=false;
				break;
			}
		}
		cout<<((able)?"YES":"NO")<<endl;
 
	}
	return 0;
}
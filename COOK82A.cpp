#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		std::map<string, int> mp;
		for (int i = 0; i < 4; ++i)
		{
			string s;
			cin>>s;
			int score;
			cin>>score;
			mp[s] = score;
		}
		if ((mp["Malaga"]>mp["RealMadrid"]) && (mp["Eibar"] < mp["Barcelona"]))
		{
			printf("Barcelona\n");
		}
		else
			printf("RealMadrid\n");
	}
	return 0;
}
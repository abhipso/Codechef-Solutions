#include <bits/stdc++.h>
using namespace std;
int reverse(int n,int k)
{
	std::vector<int> v;
	while(n>0)
	{
		v.push_back(n%2);
		n/=2;
		k--;
	}
	while(k--)
	{
		v.push_back(0);
	}
	int ans=0;
	for (int i = 0; i < v.size(); ++i)
	{
		ans = (ans*2)+v[i];
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		string s;
		cin>>s;
		char final[s.length()];
		for (int i = 0; i < s.length(); ++i)
		{
			int idx = reverse(i,k);
			final[idx] = s[i];
		}
		final[s.length()] = '\0';
		printf("%s\n",final );
	}
	return 0;
}
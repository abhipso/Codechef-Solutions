#include <bits/stdc++.h>
using namespace std;
 
long long ncr(long long n,long long r)
{
	if (r>n)
	{
		return 0;
	}
	if(r > n / 2) r = n - r;
	long long ans = 1;
	int i;
 
	for(i = 1; i <= r; i++) 
	{
		ans *= n - r + i;
		ans /= i;
	}
 
	return ans;
}
 
int main()
{
	long long x,n;
	cin>>x>>n;
	long long ans = 0;
	for (int jjj = 0; jjj < n; ++jjj)
	{
		string s;
		cin>>s;
		vector<char> compartment[9];
		for (int i = 0; i <= 35; ++i)
		{
			compartment[(i/4)].push_back(s[i]);
		}
		for (int i = s.length() - 18; i < s.length(); ++i)
		{
			compartment[8-((i-36)/2)].push_back(s[i]);
		}
		for (int i = 0; i < 9; ++i)
		{
			long long empty = count(compartment[i].begin(),compartment[i].end(),'0');
			ans +=ncr(empty,x);
		}
	}
	printf("%lld\n", ans);
 
	return 0;
} 
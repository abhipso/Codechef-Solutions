#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
 
		long long a[n];
		long long w[n];
		for (long long i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (long long i = 0; i < n; ++i)
		{
			cin>>w[i];
		}
 
		long long sum = INT_MIN;
		unordered_map<long long,long long> st;
		long long beginning = 0;
		std::vector<pair<long long,long long>> ranges;
		bool rem = false;
		for (long long i = 0; i < n; ++i)
		{
			if (st.find(a[i]) == st.end())
			{
				st[a[i]] = i;
			}
			else
			{
				if (i==n-1)
				{
					rem = true;
				}
				ranges.push_back(make_pair(beginning,i-1));
				beginning = st[a[i]]+1;
				i = beginning;
				st.clear();
				st[a[i]] = i;
			}
		}
		ranges.push_back(make_pair(beginning,n-1));
		long long cum[n+1];
		cum[0]=0;
		for (long long i = 0; i < n; ++i)
		{
			cum[i+1] = cum[i] + w[i];
		}
		for (auto singleRange : ranges)
		{
			sum = max(sum,cum[singleRange.second+1] - cum[singleRange.first]);
		}
		printf("%lld\n", sum);
	}
	return 0;
}
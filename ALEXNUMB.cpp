#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		unordered_set<ll> st;
		for (int i = 0; i < n; ++i)
		{
			ll tmp;
			cin>>tmp;
			st.insert(tmp);
		}
		printf("%lld\n",(ll)st.size()*(ll)(st.size()-1)/(ll)2 );	
	}
	return 0;
}
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
		unordered_set<int> st;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin>>tmp;
			st.insert(tmp);
		}
		printf("%d\n",st.size()) ;
	}
	return 0;
}
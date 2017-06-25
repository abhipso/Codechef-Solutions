#include <bits/stdc++.h>
using namespace std;
int main()
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
	if (n==1)
	{
		printf("0\n");
		return 0;
	}
	for (int i = 1; i <= n; ++i)
	{
		if (st.find(i)==st.end())
		{
			printf("%d ",i );
		}
	}
	return 0;
}
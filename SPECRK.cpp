#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		std::vector<int> v;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			v.push_back(a[i]);
		}
		int ans;
		for (int i = 0; i < n; ++i)
		{
			if (count(v.begin(),v.end(),a[i])!=2)
			{
				ans=a[i];
			}	
		}
		cout<<ans<<endl;
	}
	return 0;
}
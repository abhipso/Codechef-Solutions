#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	unordered_set<int> st1,st2,st3;
	std::set<int> v;
	for (int i = 0; i < n1; ++i)
	{
		int tmp;
		cin>>tmp;
		st1.insert(tmp);
		v.insert(tmp);
	}
 
	for (int i = 0; i < n2; ++i)
	{
		int tmp;
		cin>>tmp;
		v.insert(tmp);
		st2.insert(tmp);
	}
 
	for (int i = 0; i < n3; ++i)
	{
		int tmp;
		cin>>tmp;
		st3.insert(tmp);
		v.insert(tmp);
	}
	std::vector<int> ans;
	for (auto i = v.begin(); i !=v.end(); ++i)
	{
		int curr=*i;
		int occ=0;
		if (st1.find(curr)!=st1.end())
		{
			occ++;
		}
		if (st2.find(curr)!=st1.end())
		{
			occ++;
		}
		if (st3.find(curr)!=st1.end())
		{
			occ++;
		}
		if (occ>1)
		{
			ans.push_back(curr);
		}
	}
	printf("%d\n",ans.size() );
	for (int i = 0; i < ans.size(); ++i)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}
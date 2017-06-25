#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector< vector<int> > getAllSubsets(vector<int> set)
{
    vector< vector<int> > subset;
    vector<int> empty;
    subset.push_back( empty );
 
    for (int i = 0; i < set.size(); i++)
    {
        vector< vector<int> > subsetTemp = subset;
 
        for (int j = 0; j < subsetTemp.size(); j++)
            subsetTemp[j].push_back( set[i] );
 
        for (int j = 0; j < subsetTemp.size(); j++)
            subset.push_back( subsetTemp[j] );
    }
    return subset;
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool ans=false;
		std::vector<int> v;
		for (int i = 0; i < 4; ++i)
		{
			// cin>>a[i];
			int tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		vector< vector<int> > super= getAllSubsets(v);
		for (int i = 1; i < super.size(); ++i)
		{
			int sum=0;
			for (int j = 0; j < super[i].size(); ++j)
			{
				sum+=super[i][j];
			}
			if (sum==0)
			{
				ans=true;
			}
		}
		cout<<(ans?"Yes":"No")<<endl;
	
	}	
	return 0;
}
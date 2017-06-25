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
		std::vector<pair<int,int> > v;
		std::vector<pair<int,int> > all;
		for (int i = 0; i < n; ++i)
		{
			int x,y;
			cin>>x>>y;
			v.push_back(make_pair(x,y));
		}
		sort(v.begin(),v.end());
 
 
		pair<int,int> final_destinaion = make_pair(v[v.size()-1].first , v[v.size()-1].second);
 
		int curr_x = v[0].first, oldCurr_x = v[0].first;
		stack<pair<int,int> >q;
 
		for (int i = 0; i < v.size(); ++i)
		{
			curr_x = v[i].first;
			if (curr_x!=oldCurr_x)
			{
				while(!q.empty())
				{
					all.push_back(q.top());
					q.pop();
				}
				q.push(make_pair(v[i].first,v[i].second));
			}
			if (curr_x==oldCurr_x)
			{
				q.push(make_pair(v[i].first,v[i].second));
			}
			oldCurr_x = curr_x;
		}
		while(!q.empty())
		{
			all.push_back(q.top());
			q.pop();
		}
		double ans=0;
		for (int i = 0; i < all.size()-1; ++i)
		{
			double x0= (double)all[i].first;
			double y0= (double)all[i].second;
			
			double x1= (double)all[i+1].first;
			double y1= (double)all[i+1].second;
 
			ans+=(sqrt(( x0-x1 )*( x0-x1 )+(( y0 -y1 )*( y0 -y1 ))));
		}
 
 
		printf("%.2lf\n",ans );
	}
	return 0;
}
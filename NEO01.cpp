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
		int pct = 0;
		ll ps =0,ns = 0,score=0;
		std::vector<int> neg;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			cin>>tmp;
			if (tmp>=0)
			{
				pct++;
				ps+=tmp;
			}
			else
				neg.push_back(tmp);
		}
		score = ps*pct;
		sort(neg.begin(),neg.end(),greater<int>());
		bool flag = true;
		for (int i = 0; i < neg.size(); ++i)
		{
			if (flag)
			{
				if ((neg[i]+ps)*(pct+1)>score)
				{
					score = (neg[i]+ps)*(pct+1);
					ps+=neg[i];
					pct++;
				}
				else
				{
					score+=neg[i];
					flag = false;
				}
			}
			else
				score+=neg[i];
		}
		printf("%lld\n", score);
	}
	return 0;
}
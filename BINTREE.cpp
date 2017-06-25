#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int xx=x;
		int yy=y;
		std::vector<int> a,b;
		while(x>=1)
		{
			a.push_back(x);
			x/=2;
		}
		while(y>=1)
		{
			b.push_back(y);
			y/=2;
		}
		int target;
		for (int i = 0; i < b.size(); ++i)
		{
			if (find(a.begin(), a.end(),b[i])!=a.end())
			{
				target=b[i];
				break;
			}
		}
		int p=0,q=0;
		while (xx > target)
		{
			xx/=2;
			p++;
		}
		while (yy > target)
		{
			yy/=2;
			q++;
		}
		printf("%d\n", p+q);
	}
	return 0;
}
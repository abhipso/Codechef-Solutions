#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int count=0;
	while(t--)
	{
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int dist1=abs(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
		int dist2=abs(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
		int dist3=abs(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
 
		bool ans=false;
		if (dist1+dist2==dist3)
		{
			ans=true;
		}
		if (dist3+dist2==dist1)
		{
			ans=true;
		}
		if (dist1+dist3==dist2)
		{
			ans=true;
		}
		if (ans)
		{
			count++;
		}
 
	}
	printf("%d\n", count);
	return 0;
}
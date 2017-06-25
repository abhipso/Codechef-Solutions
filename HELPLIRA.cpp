#include <bits/stdc++.h>
using namespace std;
int area(int *x,int * y)
{
	double ans = abs( ( (x[1]  - x[0]) * (y[2]  - y[0])    ) - ( (x[2] - x[0])* (y[1] - y[0])  ) );
	return ans/2;
}
 
int main()
{
	int n;
	cin>>n;
	double minival = INT_MAX, maxival = INT_MIN;
	int miniidx,maxiidx;
	for (int trin = 0; trin < n; ++trin)
	{
		int x[3],y[3];
		for (int i = 0; i < 3; ++i)
		{
			cin>>x[i]>>y[i];
		}
		double areaVal = area(x,y);
		if (areaVal <= minival)
		{
			minival = areaVal;
			miniidx = trin;
		}
		if (areaVal >= maxival)
		{
			maxival = areaVal;
			maxiidx = trin;
		}
	}
	printf("%d %d\n", miniidx + 1, maxiidx+ 1 );
	return 0;
}
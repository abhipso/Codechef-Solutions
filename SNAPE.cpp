#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double a,b;
		cin>>a>>b;
		printf("%lf %lf\n",sqrt(abs((a*a)-(b*b))), sqrt((a*a)+(b*b)));
	}
	return 0;
}
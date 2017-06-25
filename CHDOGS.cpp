#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double s,v;
		scanf("%lf %lf",&s,&v);
		printf("%lf\n",(2*s)/(3*v));		
	}
	return 0;
}
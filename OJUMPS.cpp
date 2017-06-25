#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
int main()
{
	ll n;
	cin>>n;
	if (n%3==0)
	{
		printf("yes\n");
	}
	else if ((n-1)%6==0)
	{
		printf("yes\n");
	}
	else
		printf("no\n");
	return 0;
}